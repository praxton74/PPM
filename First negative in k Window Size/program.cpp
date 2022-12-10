vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) 
{
    
vector<long long >ans;
queue<long long>q;
int i=0,j=0;
while(j<N)
{
    if(A[j]<0)
    q.push(A[j]);
    if(j-i+1==K)
    {
        if(!q.empty())
        ans.push_back(q.front());
        else
        ans.push_back(0);
        if(A[i]==q.front())
        q.pop();
        i++;
    }
    j++;
}
return ans;
    
}
