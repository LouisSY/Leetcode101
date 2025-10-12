/*
 * @lc app=leetcode id=455 lang=swift
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
    func findContentChildren(_ g: [Int], _ s: [Int]) -> Int {
        var children_array = g.sorted(by: <)
        var cookies_array = s.sorted(by: <)

        print(children_array)
        print(cookies_array)

        var children_index = 0
        var cookie_index = 0

        while children_index < children_array.count && cookie_index < cookies_array.count {
            if cookies_array[cookie_index] >= children_array[children_index] {
                children_index += 1
            }
            cookie_index += 1
        }

        return children_index
    }
}
// @lc code=end

