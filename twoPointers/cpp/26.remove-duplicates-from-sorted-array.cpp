/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int full_ptr = 0, d_ptr = 0;

        while (full_ptr < nums.size()) {
            if (nums[full_ptr] == nums[d_ptr]) {
                ++full_ptr;
            } else {
                ++d_ptr;
                nums[d_ptr] = nums[full_ptr];
                ++full_ptr;
            }
        }
        return d_ptr + 1;
    }
};
// @lc code=end

