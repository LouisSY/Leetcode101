#
# @lc app=leetcode id=406 lang=python3
#
# [406] Queue Reconstruction by Height
#

# @lc code=start
class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        # sort by height desc, then k asc
        people.sort(key=lambda x: (-x[0], x[1]))
        print(people)

        target_order = [people[0]]

        for i in range(1, len(people)):
            target_order.insert(people[i][1], people[i])

        return target_order
# @lc code=end

