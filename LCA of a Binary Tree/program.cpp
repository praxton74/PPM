/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
       if(root==NULL)
       {
           return NULL;
       }     
       if(root==p || root==q)
       {
           return root;
       }

       TreeNode* LA=(lowestCommonAncestor(root->left,p, q));
       TreeNode* RA=(lowestCommonAncestor(root->right,p, q));

       if(LA!=NULL && RA!=NULL)
       {
           return root;
       }
       else if(LA!=NULL && RA==NULL)
       {
           return LA;
       }
       else if(LA==NULL && RA!=NULL)
       {
           return RA;
       }
       else
       {
           return NULL;
       }
    }
};
