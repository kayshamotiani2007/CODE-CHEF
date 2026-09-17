# Majority Element II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array of size `n`, find all elements that appear more than `⌊n / 3⌋` times.

 

 **Example 1:** 

```
Input: nums = [3,2,3]
Output: [3]

```

 **Example 2:** 

```
Input: nums = [1]
Output: [1]

```

 **Example 3:** 

```
Input: nums = [1,2]
Output: [1,2]

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- -109 <= nums[i] <= 109

 

 **Follow up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 11 ms (beats 19.33%)  
**Memory:** 26.6 MB (beats 21.30%)  
**Submitted:** 2026-09-17T17:22:32.200Z  

```cpp
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
        
    
        

```

---

[View on LeetCode](https://leetcode.com/problems/majority-element-ii/)