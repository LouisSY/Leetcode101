#
# @lc app=leetcode id=406 lang=python3
#
# [406] Queue Reconstruction by Height
#

# @lc code=start
class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        people_copy = people.copy()
        people_copy.sort(key=lambda x: x[0], reverse=True)
        print(people_copy)

        return people_copy
# @lc code=end

