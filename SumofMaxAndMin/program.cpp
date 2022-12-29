int findSum(int A[], int N)
    {
    	//code here.
    	int mini,maxi=0;
    	if(A[0]>A[1])
    	{
    	    maxi=A[0];
    	    mini=A[1];
    	}
    	else
    	{
    	    maxi=A[1];
    	    mini=A[0];
    	}
    	
    	for(int i=2;i<N;i++)
    	{
    	    if(A[i]>maxi)
    	    {
    	        maxi=A[i];
    	    }
    	    if(A[i]<mini)
    	    {
    	        mini=A[i];
    	    }
    	}
    	return (maxi+mini);
    }
