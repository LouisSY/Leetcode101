/*
 * @lc app=leetcode id=406 lang=swift
 *
 * [406] Queue Reconstruction by Height
 */

// @lc code=start
class Solution {
    func reconstructQueue(_ people: [[Int]]) -> [[Int]] {
        let sortedPeople = people.sorted {
            $0[0] == $1[0] ? $0[1] < $1[1] : $0[0] > $1[0]
        }

        var correctQueue = [[Int]]()

        for person in sortedPeople {
            correctQueue.insert(person, at: person[1])
        }
        return correctQueue
    }
}
// @lc code=end

