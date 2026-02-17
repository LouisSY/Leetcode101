#
# @lc app=leetcode id=34 lang=python3
#
# [34] Find First and Last Position of Element in Sorted Array
#

# @lc code=start
class Solution:
    def findLeft(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
        index = -1
        while (left <= right):
            mid = int((left + right) / 2)
            mid_value = nums[mid]
            if mid_value == target:
                right = mid - 1
                index = mid
            elif mid_value < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return index

    def findRight(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1
        index = -1
        while (left <= right):
            mid = int((left + right) / 2)
            mid_value = nums[mid]
            if mid_value == target:
                left = mid + 1
                index = mid
            elif mid_value < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return index
                

    def searchRange(self, nums: List[int], target: int) -> List[int]:
        return [self.findLeft(nums, target), self.findRight(nums, target)]
# @lc code=end

