class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int p=0,mini=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            int cost=prices[i]-mini;
            p=max(cost,p);
            mini=min(mini,prices[i]);
        }
        return p;
    }
};
