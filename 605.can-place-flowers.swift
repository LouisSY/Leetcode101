/*
 * @lc app=leetcode id=605 lang=swift
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution {
    func canPlaceFlowers(_ flowerbed: [Int], _ n: Int) -> Bool {
        var new_flowerbed = [0] + flowerbed + [0]
        var count = 0

        for i in 1..<new_flowerbed.count - 1 {
            if new_flowerbed[i - 1] == 0 && new_flowerbed[i] == 0 && new_flowerbed[i + 1] == 0 {
                new_flowerbed[i] = 1
                count += 1
            }
        }
        return count >= n
    }
}
// @lc code=end

