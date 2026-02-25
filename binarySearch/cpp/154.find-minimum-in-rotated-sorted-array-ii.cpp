/*
 * @lc app=leetcode id=154 lang=cpp
 *
 * [154] Find Minimum in Rotated Sorted Array II
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l{0}, r{static_cast<int>(nums.size()) - 1};
        while (l < r)
        {
            int mid{l + (r - l) / 2};
            if (nums[mid] < nums[r])
            {
                r = mid;
            }
            else if (nums[mid] > nums[r])
            {
                l = mid + 1;
            }
            else
            {
                --r;
            }
        }

        return nums[r];
    }
};
// @lc code=end
