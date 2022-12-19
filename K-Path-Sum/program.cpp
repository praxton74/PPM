class Solution {
public:
    void solve(TreeNode *root,vector<long>p,int &c,int ts)
    {
        if(root==nullptr)
        {
            return;
        }

        p.push_back(root->val);
        solve(root->left,p,c,ts);
        solve(root->right,p,c,ts);

        long n=p.size();
        long s=0;
        for(long i=n-1;i>=0;i--)
        {
            s+=p[i];
            if(s==long(ts))
            {
                c++;
            }
        }
        p.pop_back();
    }



    int pathSum(TreeNode* root, int targetSum)
    {
        vector<long>p;
        int c=0;
        solve(root,p,c,targetSum);
        return c;    
    }
};
