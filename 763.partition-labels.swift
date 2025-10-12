/*
 * @lc app=leetcode id=763 lang=swift
 *
 * [763] Partition Labels
 */

// @lc code=start
class Solution {
    func partitionLabels(_ s: String) -> [Int] {
        struct CharInfo {
            var firstIndex: Int
            var lastIndex: Int
        }

        var charMap = [Character: CharInfo]()
        for (index, c) in s.enumerated() {
            if !charMap.keys.contains(c) {
                charMap[c] = CharInfo(firstIndex: index, lastIndex: index)
            } else {
                charMap[c]?.lastIndex = index
            }
        }

        var intervals = charMap.values.sorted {
            if $0.firstIndex == $1.firstIndex {
                return $0.lastIndex < $1.lastIndex
            } else {
                return $0.firstIndex < $1.firstIndex
            }
        }

        var end = intervals[0].lastIndex
        var result = [Int]()

        for interval in intervals[1...] {
            if interval.firstIndex < end {
                end = max(end, interval.lastIndex)
            } else {
                result.append(end)
                end = interval.lastIndex
            }
        }

        result.insert(-1, at: 0)
        result.append(s.count - 1)

        return zip(result.dropFirst(), result.dropLast()).map { $0 - $1 }

    }
}
// @lc code=end

