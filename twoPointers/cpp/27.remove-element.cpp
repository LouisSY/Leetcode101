/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int full_ptr = 0, d_ptr = 0;
        while (full_ptr < nums.size()) {
            if (nums[full_ptr] != val) {
                nums[d_ptr] = nums[full_ptr];
                ++d_ptr;
                ++full_ptr;
            } else {
                ++full_ptr;
            }
        }
        return d_ptr;
    }
};
// @lc code=end

