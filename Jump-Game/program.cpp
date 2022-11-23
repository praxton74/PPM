//Here the intuition is to travel from last index to the first & for
//every index checking if we can reach to last reachable index from current index
//if we can reach, update lastIdx to that index
//in the end the lastIdx should be equal to zero
//and if it is'nt, return false  


class Solution {
public:
bool canJump(vector<int>& nums) 
{
        int n = nums.size();
        int lastIdx = n - 1;
        for(int i = lastIdx; i>=0; i--)
            if(i + nums[i] >= lastIdx) lastIdx = i;
        return lastIdx == 0;
} 
};
