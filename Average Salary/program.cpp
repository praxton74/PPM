class Solution {
public:
    double average(vector<int>& salary)
    {
        int s=salary.size();
        sort(salary.begin(),salary.end());
        if(s==3)
        {
            return salary[1];
        }
        double ans;
        for(int i=1;i<=s-2;i++)
        {
            ans+=salary[i];
        }
        return ans/(s-2);  
    }
};
