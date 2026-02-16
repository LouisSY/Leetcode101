/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // update need hash table
        for (char c : t) {
            ++need[c];
        }

        int left = 0, right = 0;
        int valid = 0;

        int start = 0;
        int len = INT_MAX;

        while (right < s.size()) {
            // move right pointer
            char c = s[right];
            ++right;

            if (need.count(c)) {
                ++window[c];
                if (window[c] == need[c]) {
                    ++valid; // update counts of needed chars
                }
            }

            while (valid == need.size()) {
                // record the length of current window if it is smaller
                if (right - left < len) {
                    start = left;
                    len = right - left;
                }

                // move the left window
                char d = s[left];
                ++left;
                
                // if left pointer exlude a needed char, update the window and need hash map
                if (need.count(d)) {
                    if (window[d] == need[d]) {
                        --valid;
                    }
                    --window[d];
                }
            }
        }
        return len == INT_MAX ? "" : s.substr(start, len);
    }
};
// @lc code=end

