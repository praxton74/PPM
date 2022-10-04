#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, maxsum = 0;
    for( int i = 0; i<n; i++){
        sum +=arr[i];
        maxsum = max(sum,maxsum);
        if(sum<0)
          sum = 0;
    }
    return maxsum;     
}
