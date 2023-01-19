class Solution {
public:
    vector<int> sumZero(int n)
    {
        vector<int>ans(n);
        
        if(n%2==0)
        {
            for(int i=0;i<n-1;i+=2)
            {
                ans[i]=(i+1);
                ans[i+1]=(i+1)*(-1);
            }
        }   
        else
        {
            for(int i=0;i<n-1;i+=2)
            {
                ans[i]=(i+1);
                ans[i+1]=(i+1)*(-1);
            }
            ans[n-1]=0;
        }

        return ans; 
    }
};
