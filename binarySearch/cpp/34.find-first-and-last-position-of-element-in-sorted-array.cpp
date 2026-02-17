/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    int findLeft(const vector<int> &nums, const int &target) {
        int left = 0, right = nums.size() - 1;
        int index = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                index = mid;
                right = mid - 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return index;
    }

    int findRight(const vector<int> &nums, const int &target) {
        int left = 0, right = nums.size() - 1;
        int index = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                index = mid;
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return vector<int> {findLeft(nums, target), findRight(nums, target)};
    }
};
// @lc code=end

