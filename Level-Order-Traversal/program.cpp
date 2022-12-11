/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> ans;
        vector<int>temp;
        queue<TreeNode*>q;
        q.push(root);


        if(root==NULL)
        {
            return ans;
        }
        while(! q.empty())
        {
            vector<int>temp;
            int x=q.size();
            while(x--)
            {
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left!=NULL)
                {
                    q.push(curr->left);
                }
                
                if(curr->right!=NULL)
                {
                    q.push(curr->right);
                }
                temp.push_back(curr->val);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};
