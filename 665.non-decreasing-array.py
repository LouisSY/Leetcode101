#
# @lc app=leetcode id=665 lang=python3
#
# [665] Non-decreasing Array
#

# @lc code=start
class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        if len(nums) <= 2:
            return True
        
        changes = 0

        for i in range(1, len(nums)):
            if nums[i] < nums[i - 1]:
                changes += 1
                if changes > 1:
                    return False

                if i >= 2:
                    if nums[i - 2] <= nums[i]:
                        nums[i - 1] = nums[i - 2]
                    else:
                        nums[i] = nums[i - 1]
        
        return True
        
# @lc code=end

