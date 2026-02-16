/*
 * @lc app=leetcode id=665 lang=swift
 *
 * [665] Non-decreasing Array
 */

// @lc code=start
class Solution {
    func checkPossibility(_ nums: [Int]) -> Bool {
        var nums_copy = nums
        var count = 0
        for i in 1..<nums_copy.count {
            if nums_copy[i] < nums_copy[i - 1] {
                count += 1

                if i - 2 >= 0 && nums_copy[i] < nums_copy[i - 2] {
                    nums_copy[i] = nums_copy[i - 1]
                } else {
                    nums_copy[i - 1] = nums_copy[i]
                }
            }
        }
        return count <= 1
    }
}
// @lc code=end

