/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        for (int h_ptr = 0; h_ptr <= (int)haystack.length() - (int)needle.length(); ++ h_ptr) {
            int n_ptr = 0;
            int temp_h_ptr = h_ptr;
                
            while (n_ptr < needle.length() && haystack[temp_h_ptr] == needle[n_ptr]) {
                ++temp_h_ptr;
                ++n_ptr;
            }
            if (n_ptr == needle.length()) {
                return h_ptr;
            }
        }
        
        return -1;
    }
};
// @lc code=end

