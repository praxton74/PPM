class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int>ans(nums.size());
        long long p=1;
        int c=0,indx=-1;;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                indx=i;
                c++;
            }
            else
            {
                p*=nums[i];
            }
        }
        if(c>=2)
        {
            return ans;
        }
        else if(c==1)
        {
            ans[indx]=p;
            return ans;
        }
        else
        {
            vector<int>ANS;
            for(int i=0;i<nums.size();i++)
            {
                int d=p/nums[i];
                ANS.push_back(d);
            }
            return ANS;
        }

    }
};
