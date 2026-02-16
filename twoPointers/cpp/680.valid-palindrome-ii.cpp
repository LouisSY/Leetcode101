/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindromeRange(const string &s, int left, int right) {
        while (left <= right) {
            if (s[left] != s[right]) return false;
            ++left;
            --right;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        while (left <= right) {
            if (s[left] == s[right]) {
                ++left;
                --right;
            } else {
                return isPalindromeRange(s, left + 1, right) ||
                        isPalindromeRange(s, left, right - 1);
            }
        }

        return true;
    }
};
// @lc code=end

