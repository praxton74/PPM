class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) 
    {
        sort(numsDivide.rbegin(),numsDivide.rend());
        int c=0;
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(!pq.empty())
        {
            int ele=pq.top();
            bool f=true;
            for(int i=0;i<numsDivide.size();i++)
            {
                if(numsDivide[i]%ele!=0)
                {
                    f=false;
                    break;
                }
            }
            if(f==false)
            {
                c++;
                pq.pop();
            }
            else if(f==true)
            {
                break;
            }
        }
        if(c==nums.size())
        {
            return -1;
        }
        return c;
    }
};
