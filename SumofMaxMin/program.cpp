#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n)
{
    int s=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[l])
        {
            l=i;
        }
        if(arr[i]<arr[s])
        {
            s=i;
        }
    }
    int sum=arr[s]+arr[l];
    return sum;
}
