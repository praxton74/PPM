class Solution {
public:
    int specialArray(vector<int>& nums)
    {
        int n=nums.size();
        for(int i=0;i<1001;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]>=i)
                {
                    c++;
                }
            }
            if(c==i)
            return c;
        }
        return -1;
    }
};
