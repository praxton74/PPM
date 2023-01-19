class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>q;
      q.push(node);
      while(!q.empty())
      {
          Node*t=q.front();
          ans.push_back(t->data);
          if(t->left!=NULL)
          q.push(t->left);
          if(t->right!=NULL)
          q.push(t->right);
          q.pop();
      }
      
      return ans;
      
    }
};
