/*
* https://leetcode.com/problems/two-sum/
* Runtime: 1 ms, faster than 99.91% of Java online submissions for Two Sum.
* Memory Usage: 41.7 MB, less than 5.65% of Java online submissions for Two Sum.
*/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> numTried = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (numTried.get(nums[i]) != null) {
                int[] ret = {numTried.get(nums[i]), i};
                return ret;
            }
            numTried.put(target - nums[i], i);
        }
        int[] ret = {};
        return ret;
    }
}
