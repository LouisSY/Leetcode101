/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    int dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0) {
            return 0;
        }

        grid[r][c] = 0;
        return (1 + dfs(grid, r + 1, c) + dfs(grid, r - 1, c) + dfs(grid, r, c + 1) + dfs(grid, r, c - 1));
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea{0};

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                maxArea = max(dfs(grid, i, j), maxArea);
            }
        }

        return maxArea;
    }
};
// @lc code=end

