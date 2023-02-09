int Solution::solve(vector<int> &A)
{
    sort(A.begin(), A.end());
	int size = A.size();
	for(int i=0;i<size;i++)
    {
        while(i+1<size && A[i]==A[i+1])
			i++;
		if(A[i]==size-1-i)
			return 1;
	}
	return -1;
}
