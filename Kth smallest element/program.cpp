int kthSmallest(int arr[], int l, int r, int k) 
    {
        //code here
        priority_queue <int>maxh;
        for(int i=l;i<=r;i++)
        {    
            maxh.push(arr[i]);
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }
        int a=maxh.top();
        return a;
    }
