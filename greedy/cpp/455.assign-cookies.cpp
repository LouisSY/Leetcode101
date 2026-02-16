/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int child_idx = 0, cookie_idx = 0;
        int n_children = g.size(), n_cookies = s.size();
        while (child_idx < n_children && cookie_idx < n_cookies) {
            if (s[cookie_idx] >= g[child_idx]) {
                child_idx += 1;
            }
            cookie_idx += 1;
        }

        return child_idx;
    }
};
// @lc code=end

