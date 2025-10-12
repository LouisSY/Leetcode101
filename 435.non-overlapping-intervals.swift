/*
 * @lc app=leetcode id=435 lang=swift
 *
 * [435] Non-overlapping Intervals
 */

// @lc code=start
class Solution {
    func eraseOverlapIntervals(_ intervals: [[Int]]) -> Int {
        guard intervals.count > 1 else {
            return 0
        }

        var sortedIntervals = intervals.sorted { $0[1] < $1[1] }

        var end = sortedIntervals[0][1]
        var count = 0

        for interval in sortedIntervals[1...] {
            if interval[0] < end {
                count += 1
            } else {
                end = interval[1]
            }
        }
        return count
    }
}
// @lc code=end

