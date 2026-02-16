/*
 * @lc app=leetcode id=452 lang=swift
 *
 * [452] Minimum Number of Arrows to Burst Balloons
 */

// @lc code=start
class Solution {
    func findMinArrowShots(_ points: [[Int]]) -> Int {
        var sortedBalloons = points.sorted {
            if $0[1] == $1[1] {
                return $0[0] < $1[0]
            } else {
                return $0[1] < $1[1]
            }
        }

        print(sortedBalloons)

        var end = sortedBalloons[0][1]
        var arrows = 1

        for point in sortedBalloons[1...] {
            if point[0] <= end {
                continue
            } else {
                arrows += 1
                end = point[1]
            }
        }
        return arrows
    }
}
// @lc code=end

