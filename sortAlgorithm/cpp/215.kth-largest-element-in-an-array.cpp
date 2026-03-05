/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
#include <vector>

using namespace std;

class Solution {
public:
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[right];
        int i = left - 1;
        
        for (int j = left; j < right; ++j) {
            if (nums[j] > pivot) {
                ++i;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[right]);

        return i + 1;
    }

    int quickSelect(vector<int>& nums, int left, int right, const int kIndex) {
        if (left >= right) return nums[left];

        int p = partition(nums, left, right);

        if (p == kIndex) {
            return nums[p];
        } else if (p < kIndex) {
            return quickSelect(nums, p + 1, right, kIndex);
        } else {
            return quickSelect(nums, left, p - 1, kIndex);
        }
    }

    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, 0, nums.size() - 1, k - 1);
    }
};
// @lc code=end

