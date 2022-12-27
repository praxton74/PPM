vector <int> nearlySorted(int arr[], int num, int K)
    {
        // Your code here
        vector<int>ans;
        priority_queue <int, vector<int>, greater<int>> pq;
        for(int i=0;i<num;i++)
        {
            pq.push(arr[i]);
            if(pq.size()>K)
            {
                ans.push_back(pq.top());
                pq.pop();
            }
        }
        while(pq.size()!=0)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
