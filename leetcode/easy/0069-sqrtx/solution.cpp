class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // Base cases: 0 -> 0, 1 -> 1
        
        int left = 1, right = x / 2;
        int ans = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // Equivalent to mid * mid <= x, avoiding 32-bit integer overflow
            if (mid <= x / mid) {
                ans = mid;     // mid is a valid candidate
                left = mid + 1; // try finding a larger integer
            } else {
                right = mid - 1; // mid * mid > x, search left half
            }
        }
        
        return ans;
        
    }
};