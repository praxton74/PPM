class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n=prices.size();
        vector<int>a(n);
        int maxi=prices[n-1];
        a[n-1]=maxi;
        int j=n-2;
        for(int i=n-2;i>=0;i--)
        {
            maxi=max(maxi,prices[i]);
            a[j]=maxi;
            j--;
        }
        
        int p,maxp=0;;
        for(int i=0;i<n;i++)
        {
            p=a[i]-prices[i];
            if(p>maxp)
                maxp=p;
        }
        
        return maxp;
    }
};
