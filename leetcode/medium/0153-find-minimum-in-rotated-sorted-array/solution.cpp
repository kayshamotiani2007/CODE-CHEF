class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If mid element is greater than high element, 
            // the minimum must be in the right half.
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } 
            // Otherwise, the minimum is at mid or in the left half.
            else {
                high = mid;
            }
        }

        return nums[low];
        
    }
};