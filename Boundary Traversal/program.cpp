#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void LEFT(TreeNode<int>* root,vector<int>&ans)
{
    if((root==NULL) || (root->right==NULL && root->left==NULL))
       {
           return;
       }
       ans.push_back(root->data);
       if(root->left!=NULL)
       {
           LEFT(root->left,ans);
       }
       else
       {
           LEFT(root->right,ans);
       }
}
void LEAF(TreeNode<int>* root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        ans.push_back(root->data);
        return;
    }
     LEAF(root->left,ans);
     LEAF(root->right,ans);
}
void RIGHT(TreeNode<int>* root,vector<int>&ans)
{
    if((root==NULL) || (root->right==NULL && root->left==NULL))
       {
           return;
       }
       if(root->right)
       {
           RIGHT(root->right,ans);
       }
       else
       {
           RIGHT(root->left,ans);
       }
       ans.push_back(root->data);
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int> ans;
    if(root==NULL)
        return ans;
    ans.push_back(root->data);
    //left ke liye call
    LEFT(root->left,ans);
    
    //left leaf
    LEAF(root->left,ans);
    //Right Leaf
    LEAF(root->right,ans);
    
    //Right ke liye call
    RIGHT(root->right,ans);
    
    return ans;
}
