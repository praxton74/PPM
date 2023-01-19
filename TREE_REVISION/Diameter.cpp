int height(TreeNode* node){
        if(node == NULL){
            return 0;
        }
        
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        
        return 1 + max(leftHeight, rightHeight);
    }
    
    int diameterOfBinaryTree(TreeNode* root){
        // base case
        if(root == NULL){
            return 0;
        }
        
        // diameter will of either of these:- either in left only, either in right only, either combination of both
        
        int option1 = diameterOfBinaryTree(root->left); // either in left
        
        int option2 = diameterOfBinaryTree(root->right); // either in right
        
        int option3 = height(root->left) + height(root->right); // either combination of both
        
        int ans = max(option1, max(option2, option3));
        
        return ans;
