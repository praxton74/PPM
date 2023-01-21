class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>>res;
        if(root==nullptr)
        {
            return res;
        }

        queue<TreeNode*>q;
        q.push(root);
        bool ltr=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>ans(size);
            for(int i=0;i<size;i++)
            {
                TreeNode*f=q.front();
                q.pop();
                int indx=ltr?i:size-i-1;
                ans[indx]=f->val;

                if(f->left)
    	        {
    	            q.push(f->left);
    	        }
    	        if(f->right)
    	        {
    	            q.push(f->right);
    	        }
            }
            ltr=!ltr;
            res.push_back(ans);
        }
        return res;
    }
};
