class Solution {
public:

    void Left(Node*root,vector<int>&ans)
    {
        if(root==NULL) //null root
        {
            return;
        }
        if(root->left==NULL && root->right==NULL) //leaf node 
        {
            return;
        }
        ans.push_back(root->data);                //niche jate samay
        if(root->left)
        Left(root->left,ans);
        else 
        Left(root->right,ans);
        
    }
    void Leaf(Node*root,vector<int>&ans)
    {
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL)  //leaf node
        {
            ans.push_back(root->data);
            return;
        }
        Leaf(root->left,ans);
        Leaf(root->right,ans);
    }
    void Right(Node*root,vector<int>&ans)
    {
        if(root==NULL) //null root
        {
            return;
        }
        if(root->left==NULL && root->right==NULL) //leaf node 
        {
            return;
        }
        if(root->right) 
        Right(root->right,ans);
        else 
        Right(root->left,ans);
        ans.push_back(root->data); //upar ate waqt
    }


    vector <int> boundary(Node *root)
    {
        //Your code here
        
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        ans.push_back(root->data);
        //Left Tree Going down
        Left(root->left,ans);
        
        //Leaves in left side
        Leaf(root->left,ans);
        //Leaf in right side
        Leaf(root->right,ans);
        
        //Right side Going up
        Right(root->right,ans);
        
        return ans;
        
    }
};
