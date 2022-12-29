 void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int a[n];
        
        int check = 0;
        int index = 0;
        for(int i = 0; i<n; i++){
            if(arr[i]>=0) swap(arr[check++],arr[i]);
            else a[index++] = arr[i];
        }
        
        index = 0;
        for(int i = 0; i<n; i++){
            if(arr[i]<0) arr[i] = a[index++];
        }
    }
