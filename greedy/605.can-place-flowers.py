#
# @lc app=leetcode id=605 lang=python3
#
# [605] Can Place Flowers
#

# @lc code=start
class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        cleaned_flowerbed = [0] + flowerbed + [0] 

        allowed_plot_num = 0
        for i in range(1, len(cleaned_flowerbed) - 1):
            if cleaned_flowerbed[i - 1] == cleaned_flowerbed[i] == cleaned_flowerbed[i + 1] == 0:
                cleaned_flowerbed[i] = 1
                allowed_plot_num += 1
        
        return allowed_plot_num >= n
        
        
# @lc code=end

