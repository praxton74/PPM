bool hasTwoSumZero(vector<int> &A) 
{
	// add your logic here
	
	sort(A.begin(),A.end());
	int j=A.size()-1;
	for(int i=0;i<A.size();i++)
	{
		while(j>i)
		{
			if(A[i]+A[j]==0)
			{
				return true;
			}
			else if(A[i]+A[j]>0)
			{
				j--;
			}
			else
			{
				i++;
			}
		}
	}
	return false;
	
}
