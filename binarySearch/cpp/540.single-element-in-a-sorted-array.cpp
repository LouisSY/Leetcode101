/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution
{
public:
    int isOdd(const int &num)
    {
        return num % 2 == 1;
    }
    int singleNonDuplicate(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];

        int l{0};
        int r{static_cast<int>(nums.size()) - 1};

        while (l < r)
        {
            int mid{l + (r - l) / 2};

            if (isOdd(mid))
                --mid;

            if (nums[mid] == nums[mid + 1])
            {
                l = mid + 2;
            }
            else
            {
                r = mid;
            }
        }

        return nums[l];
    }
};
// @lc code=end
