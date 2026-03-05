/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    void printVector(const vector<vector<int>>& buckets) {
        for (int i = 0; i < buckets.size(); ++i) {
            cout << "Index: " << i << ": [";
            for (int j = 0; j < buckets[i].size(); ++j) {
                cout << buckets[i][j] << " ";
            }
            cout << "]" << endl;
        }
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (const int num : nums) {
            ++counts[num];
        }

        int n = nums.size();
        vector<vector<int>> buckets(n + 1);
        printVector(buckets);
        cout << "==================" << endl;

        for (auto [num, count] : counts) {
            buckets[count].push_back(num);
        }

        printVector(buckets);

        vector<int> top_k;
        for (int i = n; i >= 0; --i) {
            for (int num : buckets[i]) {
                top_k.push_back(num);
            }
            if (top_k.size() == k) {
                return top_k;
            }
        }

        return top_k;

    }
};
// @lc code=end

