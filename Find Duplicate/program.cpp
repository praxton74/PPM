int Solution::repeatedNumber(const vector<int> &A) 
{
    int arr[A.size()+1]={0};
    for(int i=0;i<A.size();i++)
    {   
        arr[A[i]]++;
        if(arr[A[i]]>1) return A[i];
    }
 
 
    return -1;
}
