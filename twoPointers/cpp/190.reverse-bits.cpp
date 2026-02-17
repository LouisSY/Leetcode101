/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    int reverseBits(int n) {
        int left = 0, right = 31;
        while (left < right) {
            if (((n >> left) & 1) != ((n >> right) & 1)) {
                n ^= (1U << left) | (1U << right);
            }
            ++left;
            --right;
        }
        return n;
    }
};
// @lc code=end

