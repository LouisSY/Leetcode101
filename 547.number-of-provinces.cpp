/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int i) {
        visited[i] = true;

        for (int j = 0; j < isConnected[i].size(); ++j) {
            if (!visited[j] && isConnected[i][j] == 1) {
                dfs(isConnected, visited, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected.size(), false);
        int count{0};

        for (int i = 0; i < isConnected.size(); ++i) {
            if (!visited[i]) {
                dfs(isConnected, visited, i);
                ++count;
            }
        }

        return count;
    }
};
// @lc code=end

