class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int maxsum=nums[0];
        int currsum=0;
        int currsum1=0;
        
        for(int i=0;i<nums.size();i++)
        {
            currsum=currsum+nums[i];
            
            if(currsum>maxsum)
                maxsum=currsum;
            
            if(currsum<0)
                currsum=0;    
        }
        return maxsum;
        
    }
};
