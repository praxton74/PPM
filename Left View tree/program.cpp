void solve(Node*root,int l,vector<int> &ans)
{
    if(root==NULL){
        return;
    }
    if(ans.size()==l)
    {
        ans.push_back(root->data);
    }
    
    solve(root->left,l+1,ans);
    solve(root->right,l+1,ans);
    
}



vector<int> leftView(Node *root)
{
   // Your code here
   
   vector<int> ans;
   solve(root,0,ans);
   return ans;
   
}
