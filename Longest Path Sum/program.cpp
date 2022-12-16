class Solution
{
   public:
   void solve(Node* root,int sum, int &maxsum,int l,int &maxlen)
   {
       if(root==NULL)
       {
           if(l>maxlen)
           {
               maxsum=sum;
               maxlen=l;
           }
           else if(l==maxlen)
           {
               maxsum=max(sum,maxsum);
           }
           return;
       }
       
       sum=sum+root->data;
       
       solve(root->left,sum,maxsum,l+1,maxlen);
       
       solve(root->right,sum,maxsum,l+1,maxlen);
       
   }

    public:
    int maxPathSum(Node* root)
    {
        //code here
        int maxsum=INT_MIN;
        int l=0;
        int sum=0;
        int maxlen=0;
        solve(root,sum,maxsum,l+1,maxlen);
        return maxsum;
    }
};
