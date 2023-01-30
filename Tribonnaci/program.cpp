class Solution {
public:
    int tribonacci(int n) 
    {
        if(n==0) return 0;
        if(n==1 || n==2) return 1;

        long long t0=0;  // t(n)
        long long t1=1;  // t(n+1)
        long long t2=1;  // t(n+2)
        long long ans=0;

        for(int i=3;i<=n;i++)
        {
            ans = t0+t1+t2;      // prev 3 value sum
            t0=t1;               // t0 will become new t(n)
            t1=t2;               // t1 will become new t(n+1)
            t2=ans;              // now curr sum will become the new t(n+2) 
        }
        return ans;
    }
};
