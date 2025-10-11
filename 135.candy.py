#
# @lc app=leetcode id=135 lang=python3
#
# [135] Candy
#

# @lc code=start
class Solution:
    def candy(self, ratings: List[int]) -> int:
        n = len(ratings)
        candies = [1] * n

        # left to right
        for i in range(1, n):
            if ratings[i] > ratings[i - 1]:
                candies[i] = candies[i - 1] + 1

        # right to left
        for i in range(n - 1, 0 ,-1):
            if ratings[i] < ratings[i - 1] and candies[i] >= candies[i - 1]:
                candies[i - 1] = candies[i] + 1

        return sum(candies)
# @lc code=end

