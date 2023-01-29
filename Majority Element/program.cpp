class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        map<int,int>mp;
        for(int i=0 ; i<size ; i++)
        {
            mp[a[i]]++;
        }
        for(auto it : mp)
        {
            if(it.second > size/2 )
            {
                return it.first;
            }
        }
        return -1;
    }
};
