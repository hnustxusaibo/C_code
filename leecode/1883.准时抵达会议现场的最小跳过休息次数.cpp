/*
 * @lc app=leetcode.cn id=1883 lang=cpp
 *
 * [1883] 准时抵达会议现场的最小跳过休息次数
 */

// @lc code=start
class Solution {
public:
    int minSkips(vector<int>& dist, int speed, int hoursBefore) {
        int sum = 0;
        for (auto x: dist) {
            sum += x;
        }
        if (speed * hoursBefore > sum) 
            return -1;
    }
};
// @lc code=end

