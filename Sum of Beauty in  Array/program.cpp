class Solution {
public:
    int sumOfBeauties(vector<int>& nums)
    {
        int c=0;
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);

        //least in left
        left[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],nums[i]);
        }

        //Largest in right
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=min(right[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            if(left[i-1]<nums[i] && nums[i]<right[i+1])
            {
                c+=2;
            }
            else if(nums[i-1]<nums[i] && nums[i]<nums[i+1])
            {
                c+=1;
            }
            else
            {
                c+=0;
            }
        }
        return c;   
    }
};
