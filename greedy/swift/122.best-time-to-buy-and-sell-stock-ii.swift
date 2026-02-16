/*
 * @lc app=leetcode id=122 lang=swift
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
    func maxProfit(_ prices: [Int]) -> Int {
        var diff = zip(prices.dropFirst(), prices).map(-)

        return diff.reduce(0) {
            if $1 > 0 {
                return $0 + $1
            } else {
                return $0
            }
        }
    }
}
// @lc code=end

