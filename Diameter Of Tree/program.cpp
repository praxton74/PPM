class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int height(Node*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return(max(height(root->left),height(root->right)))+1;
    }
    
    int diameter(Node* root)
    {
        // Your code here
        if(root==NULL)
        {
            return 0;
        }
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+height(root->right)+1;
        
        return max(op1,max(op2,op3));
        
    }
};
