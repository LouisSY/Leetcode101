/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
#include <cmath>

class Solution {
public:
    int mySqrt(int x) {
        // binary search
        // if (x == 0) return 0;
        // int left = 1, right = x;
        // int ans = 0;

        // while (left <= right) {
        //     int mid = left + (right - left) / 2;
        //     if ((long long)mid * mid <= x) {
        //         ans = mid;
        //         left = mid + 1;
        //     } else {
        //         right = mid - 1;
        //     }
        // }

        // return ans;

        //Newton's Method
        if (x == 0) return 0;

        double guess = x;
        double prev_guess = 0;

        while (abs(guess - prev_guess) > 1e-6) {
            prev_guess = guess;
            guess = 0.5 * (guess + x / guess);
        }

        return (int)guess;
    }
};
// @lc code=end

