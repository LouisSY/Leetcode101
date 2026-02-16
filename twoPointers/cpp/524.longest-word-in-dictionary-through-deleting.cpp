/*
 * @lc app=leetcode id=524 lang=cpp
 *
 * [524] Longest Word in Dictionary through Deleting
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string target = "";

        for (string &word : dictionary) {
            int s_ptr = 0;
            int dic_ptr = 0;
            while (s_ptr < s.length() && dic_ptr < word.length()) {
                if (s[s_ptr] == word[dic_ptr]) {
                    ++s_ptr;
                    ++dic_ptr;
                } else {
                    ++s_ptr;
                }
            }
            if (dic_ptr == word.length()) {
                if (word.length() > target.length() || 
                    (word.length() == target.length() && word < target)) {
                    target = word;
                }
            }
        }

        return target;
    }
};
// @lc code=end

