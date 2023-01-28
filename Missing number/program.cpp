class Solution{
  public:
    int MissingNumber(vector<int>& array, int n)
    {
        // Your code goes here
        int arr_sum = 0, true_sum = 0;
        for(int i: array)
        {
            arr_sum += i;
        }
        true_sum = (1.0 + (float)n)/2.0 * (float)n;

        return true_sum - arr_sum;
    }
};
