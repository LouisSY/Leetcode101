/*
 * @lc app=leetcode id=135 lang=swift
 *
 * [135] Candy
 */

// @lc code=start
class Solution {
    func candy(_ ratings: [Int]) -> Int {
        var candies = Array(repeating: 1, count: ratings.count)
        for i in 1..<ratings.count {
            if ratings[i] > ratings[i - 1] {
                candies[i] = candies[i - 1] + 1
            }
        }
        for i in stride(from: ratings.count - 2, through: 0, by: -1) {
            if ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1]{
                candies[i] = candies[i + 1] + 1
            }
        }
        return candies.reduce(0, +)
    }
}
// @lc code=end

