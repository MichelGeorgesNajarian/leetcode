/*
* https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
* Runtime: 0 ms, faster than 100.00% of Java online submissions for Find Minimum in Rotated Sorted Array.
* Memory Usage: 37.7 MB, less than 100% of Java online submissions for Find Minimum in Rotated Sorted Array.
*/

class Solution {
    public int findMin(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }
        int min = nums[0];
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < min) {
                return nums[i];
            }
        }
        return min;
    }
}
