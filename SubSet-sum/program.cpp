void solve(vector<int> &arr, int idx, int sum, vector<int> &ans){
        if(idx == arr.size())
        {
            ans.push_back(sum);
            return;
        }
        // pick
        solve(arr, idx+1, sum+arr[idx], ans);
        
        // not-pick
        solve(arr, idx+1, sum, ans);
 }
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    solve(num, 0, 0, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
