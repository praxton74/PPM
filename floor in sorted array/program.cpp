int findFloor(vector<long long> v, long long n, long long x)
{
        long long s=0,e=n-1;
        long long mid=s+((e-s)/2);
        int res=-1;
        while(s<=e)
        {
            if(v[mid]==x)
            {
                return mid;
            }
            else if(v[mid]>x)
            {
                e=mid-1;
            }
            else if(v[mid]<x)
            {
                res=mid;
                s=mid+1;
            }
            mid=s+((e-s)/2);
        }
        return res;
        
    }
