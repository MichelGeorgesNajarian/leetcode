/**
 *
 * https://leetcode.com/problems/subarray-sum-equals-k/
 * Runtime: 480 ms, faster than 21.71% of C++ online submissions for Subarray Sum Equals K.
 * Memory Usage: 9.9 MB, less than 98.67% of C++ online submissions for Subarray Sum Equals K.
 *
 */

//Such a bad and inefficient wy of doing it. Will probably update with a better way to do it later on

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int totSize = nums.size();
        int numSub = 0;
        int tempSum = 0;
        for (int i = 0; i < totSize; i++) {
            for (int j = i; j < totSize; j++) {
                tempSum += nums[j];
                if(tempSum == k) {
                    numSub++;
                }
            }
            tempSum = 0;
        }
        return numSub;
    }
};
