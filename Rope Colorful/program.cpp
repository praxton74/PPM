class Solution {
public:
    int minCost(string colors, vector<int>& neededTime)
    {
        int j=1,ans=0;
        for(int i=0;i<colors.length();i++)
        {
            if(colors[i]==colors[j]&& j<colors.length()&& i!=j)
            {
                if(neededTime[i]>neededTime[j])
                {
                    ans+=neededTime[j];
                    neededTime[j]=neededTime[i];
                }
                else
                {
                    ans+=neededTime[i];
                }
            }
            j++;
        }
        return ans;
    }
};
