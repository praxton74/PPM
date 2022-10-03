class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]>nums[i])
            {
                swap(nums[i+1],nums[i]);
                i--;
            }
        }
        sort(nums.begin(),nums.end());
    }
};
