/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        int two_sum = 0;
        while (left < right) {
            two_sum = numbers[left] + numbers[right];
            if (two_sum == target) {
                break;
            } else if (two_sum < target) {
                ++left;
            } else {
                --right;
            }
        }

        return vector<int>{left + 1, right + 1};
    }
};
// @lc code=end

