 int maxIndexDiff(int a[], int n) 
    {
        int mx=INT_MIN;
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(a[i]<=a[j])
            {
                mx=max(mx,j-i);
                i=0;
                j--;
            }
            else
            {
                i++;
            }
        }
        return mx;
    }
