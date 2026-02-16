/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 */

// @lc code=start
#include <cmath>
class Solution {
public:
    bool judgeSquareSum(int c) {
        long left = 0, right = (long)sqrt(c);
        while (left <= right) {
            long two_sum = pow(left, 2) + pow(right, 2);
            if (two_sum < c) {
                ++left;
            } else if (two_sum > c) {
                --right;
            } else {
                return true;
            }
        }

        return false;
    }
};
// @lc code=end

