class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) 
    {
        // code here
        int i=0,j=GeekNum.size()-1;
        long long sum=0,res=0;
        for(int k=0;k<GeekNum.size();k++)
        {
            sum+=GeekNum[k];
        }
        if(N<=K)
        {
            return GeekNum[N-1];
        }
        while(j+1<N)
        {
            GeekNum.push_back(sum);
            res=sum;
            sum-=GeekNum[i];
            i++;
            j++;
            sum+=GeekNum[j];
        }
        return res;
    }
};
