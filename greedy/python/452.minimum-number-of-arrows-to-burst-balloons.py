#
# @lc app=leetcode id=452 lang=python3
#
# [452] Minimum Number of Arrows to Burst Balloons
#

# @lc code=start
class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key=lambda x: x[1])
        
        arrow_count = 1
        right_interval = points[0][1]

        for i in range(1, len(points)):
            if points[i][0] > right_interval:
                arrow_count += 1
                right_interval = points[i][1]


        return arrow_count
# @lc code=end

