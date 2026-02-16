/*
 * @lc app=leetcode id=135 lang=cpp
 *
 * [135] Candy
 */

// @lc code=start
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candies(ratings.size(), 1);

        for (auto i = 1; i < ratings.size(); ++i) {
            if (ratings[i] > ratings[i-1]) {
                candies[i] = candies[i-1] + 1;
            }
        }

        for (auto i = 0; i < candies.size(); ++i) {
            cout << candies[i];
        }
        cout << endl;

        for (auto i = ratings.size() - 1; i > 0; --i) {
            if (ratings[i] < ratings[i - 1]) {
                candies[i - 1] = max(candies[i - 1], candies[i] + 1);
            }
        }

        for (auto i = 0; i < candies.size(); ++i) {
            cout << candies[i];
        }
        cout << endl;

        return accumulate(candies.begin(), candies.end(), 0);

    }
};
// @lc code=end

