/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int m = flowerbed.size();
        for (int i = 0; i < m; ++i) {
            if (flowerbed[i] == 0) {
                bool emptyLeft = (i == 0 || flowerbed[i - 1] == 0);
                bool emptyRight = (i == m - 1 || flowerbed[i + 1] == 0);
                if (emptyLeft && emptyRight) {
                    flowerbed[i] += 1;
                    count += 1;
                }
            }
        }

        return count >= n;
    }
};
// @lc code=end

