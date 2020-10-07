/*
 *
 * https://leetcode.com/problems/running-sum-of-1d-array/submissions/
 * Runtime: 8 ms, faster than 31.65% of C++ online submissions for Running Sum of 1d Array.
 * Memory Usage: 8.5 MB, less than 89.16% of C++ online submissions for Running Sum of 1d Array.

 * /
 
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
};
