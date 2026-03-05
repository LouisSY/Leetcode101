/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int partition(vector<int>& nums, int left, int right) {
        int pivot{nums[right]};
        int i{left - 1};
        
        for (int j = left; j < right; ++j) {
            if (nums[j] < pivot) {
                ++i;
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[i + 1], nums[right]);

        return i + 1;
    }

    void quickSort(vector<int>& nums, int left, int right) {
        if (left <= right) {
            int pivotIndex = partition(nums, left, right);

            quickSort(nums, left, pivotIndex - 1);
            quickSort(nums, pivotIndex + 1, right);
        }
    }

    void sortColors(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
    }
};
// @lc code=end

