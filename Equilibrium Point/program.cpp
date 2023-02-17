int equilibriumPoint(long long a[], int n)
    {
        // Your code here
        long long sl=0,sr=0;
        for(int i=0;i<n;i++)
        {
            sl+=a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            sr+=a[i];
            if(sl==sr)
            {
                return i+1;
            }
            else
            {
                sl-=a[i];
            }
        }
        return -1;
    }
