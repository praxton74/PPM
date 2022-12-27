class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<arr.size();i++)
        {
            int a=abs(arr[i]-x);
            int b=arr[i];
            pq.push({a,b});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }

        while(pq.size()!=0)
        {
            auto c=pq.top();
            int d=c.second;
            ans.push_back(d);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};
