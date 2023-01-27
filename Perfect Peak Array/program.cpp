int Solution::perfectPeak(vector<int> &A) 
{
    std::unordered_set<int> set;
    int n = A.size();
    int maxSoFar = A[0];
    int minSoFar = A[n-1];

    for(int i=1;i<n-1;i++){
        if(A[i] > maxSoFar){
            set.insert(i);
            maxSoFar = A[i];
        }
    }
    for(int i=n-1;i>0;i--){
        if(A[i] < minSoFar){
            minSoFar = A[i];
            if(set.find(i) != set.end())     // Agr same index fir mil gaya
            return 1;
        }
    }
    return 0;
  
}
