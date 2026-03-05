/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> counts;
        for (const char c : s) {
            ++counts[c];
        }

        const int s_size{static_cast<int>(s.size())};
        vector<vector<char>> buckets(s_size + 1);

        for (const auto& [c, count] : counts) {
            buckets[count].push_back(c);
        }

        string result{};
        for (int i = buckets.size() - 1; i >= 0; --i) {
            for (int j = 0; j < buckets[i].size(); ++j) {
                result.append(i, buckets[i][j]);
            }
        }

        return result;
    }
};
// @lc code=end

