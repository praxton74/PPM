int findKRotation(int arr[], int n)
	{
	    // code here
	     int count=0;

        for(int i=n-1;i>=1;i--){

            if(arr[i]<arr[i-1]){

                return i;

            }

        }

        return count;
	    }
