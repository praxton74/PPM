void Inorder(BinaryTreeNode<int> *root,int &c)
{
    if(root==NULL)
    {
        return ;
    }
    Inorder(root->left,c);
    if(root->left==NULL && root->right==NULL)
        c++;
    Inorder(root->right,c);
}


int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int c=0;
    Inorder(root,c);
    return c;
    
}
