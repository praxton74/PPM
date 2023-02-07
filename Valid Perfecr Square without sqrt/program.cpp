class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        long long lo = 1;
        long long hi = num / 2;
        
        while(lo <= hi) {
            long long mid = (lo + hi) / 2;
            long long sq = mid * mid;
            
            if (sq == num) return true;
            else if (sq < num) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return false;
    }
};
