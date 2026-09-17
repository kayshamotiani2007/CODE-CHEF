class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        #include <vector>
#include <unordered_map>


        std::unordered_map<int, int> counts;
        std::vector<int> result;
        int threshold = nums.size() / 3;

        // Count frequencies
        for (int num : nums) {
            counts[num]++;
        }

        // Collect elements appearing more than n/3 times
        for (auto pair : counts) {
            if (pair.second > threshold) {
                result.push_back(pair.first);
            }
        }

        return result;
    }
};
        
    
        
