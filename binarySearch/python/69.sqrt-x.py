#
# @lc app=leetcode id=69 lang=python3
#
# [69] Sqrt(x)
#

# @lc code=start
class Solution:
    def mySqrt(self, x: int) -> int:
        if x < 2: return x
        left = 1
        right = x // 2
        while left <= right:
            mid = (left + right) // 2
            if mid**2 > x:
                right = mid - 1
            elif mid**2 < x:
                left = mid + 1
            else:
                return int(mid)
        
        return int(right)
        
# @lc code=end

