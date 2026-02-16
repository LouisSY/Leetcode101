/*
 * @lc app=leetcode id=452 lang=cpp
 *
 * [452] Minimum Number of Arrows to Burst Balloons
 */

// @lc code=start

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[1] < b[1];
        });

        int prev_end = points[0][1];
        int arrowCount = 1;

        for (int i = 1; i < points.size(); ++i) {
            if (points[i][0] > prev_end) {
                arrowCount += 1;
                prev_end = points[i][1];
            }
        }

        return arrowCount;

    }
};
// @lc code=end

