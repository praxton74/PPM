class Solution {
public:
    int ans=INT_MIN;
    int helper(TreeNode * root){
        if(!root) return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        ans = max(ans , left+right+root->val);
        return max({left+root->val,right+root->val,0});
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
};
