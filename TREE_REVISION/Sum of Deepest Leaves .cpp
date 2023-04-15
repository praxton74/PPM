class Solution {
public:
    int sum = 0, th = 0;
    int height(TreeNode* root)
    {
        if(!root)
            return 0;
        return 1 + max(height(root->left), height(root->right));
    }
	
    void helper(TreeNode* root, int depth)
    {
        if(!root) 
            return;
        if(depth == th-1) 
             sum += root->val;
        helper(root->left, depth+1);
        helper(root->right, depth+1);
    }
    
    int deepestLeavesSum(TreeNode* root)
    {
        th = height(root);
        helper(root ,0);
        return sum;
    }
};
