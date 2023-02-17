int search(int A[], int l, int h, int key)
    {
        int n=h-l+1;
        int p;
        for(int i=0;i<n-1;i++){
            if(A[i]>A[i+1]){
                p = i;
                break;
            }
        }
        
        if(A[p]==key)
        {
            return p;
        }
        
        
        if(key<A[0] && key<A[p])
        {
            int s=p+1,e=n-1;
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                if(A[mid]==key)
                {
                    return mid;
                }
                else if(A[mid]>key)
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
        }
        else
        {
            int s=0,e=p-1;
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                if(A[mid]==key)
                {
                    return mid;
                }
                else if(A[mid]>key)
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
        }
        
        return -1;
        
    }
