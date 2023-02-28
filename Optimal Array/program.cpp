class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a)
    {
        // Code here
        vector<int>ans(n,0);
        for(int i=1;i<n;i++)
        {
            int x=abs(a[i]-a[i/2]);
            ans[i]=x+ans[i-1];
        }
        return ans;
    }
};
