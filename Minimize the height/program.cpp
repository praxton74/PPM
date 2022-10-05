#include <bits/stdc++.h> 
int minimizeIt(vector<int> A, int K)
{
    sort(A.begin(),A.end());
    int n=A.size();
    int diff=A[n-1]-A[0];
    int mini,maxi;
    
    for(int i=1;i<n;i++)
    {
        if(A[i]-K<0)
            continue;
        maxi=max(A[i-1]+K,A[n-1]-K);
        mini=min(A[i]-K,A[0]+K);
        
        diff=min(diff,maxi-mini);
    }
    return diff;
                 
}
