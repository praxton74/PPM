class Solution
{
    long maxProduct(int[] a, int n) 
    {
        long max=Integer.MIN_VALUE,product = 0;
        for(int i=0;i<n;i++)
        {
            product = 1;
            for(int j=i;j<n;j++)
            {
                product*=a[j];
                max = Math.max(max,product);
            }
        }
        return max;
    }
}
