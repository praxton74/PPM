class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> hash(n,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        int ans;
        for(int i=0;i<n;i++){
            if(hash[i]>=2){
                ans = i;
                break;
            }
        }   
        return ans;
    }
};
