/*
* https://leetcode.com/problems/search-in-rotated-sorted-array/
* Runtime: 0 ms, faster than 100.00% of C++ online submissions for Search in Rotated Sorted Array.
* Memory Usage: 8.7 MB, less than 86.75% of C++ online submissions for Search in Rotated Sorted Array.
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return -1;
        int mid = nums.size()/2;
        int first = 0;
        int last = nums.size() - 1;
        if (nums[mid] == target) {
            return mid;
        }
        while (first < last) {
            if (nums[mid] == target) return mid;
            //case array is perfectly sorted
            if (nums[first] <= nums[mid] && nums[mid] <= nums[last]) {
                if (nums[mid] < target) {
                    first = mid;
                } else {
                    last = mid;
                }
            } else if (nums[mid] <= nums[last] && nums[last] <= nums[first]) { // rotation point to the left
                if (nums[last] >= target && nums[mid] < target) {
                    first = mid;
                } else {
                    last = mid;
                }
            } else { //roation point to the right
                
                if (nums[last] >= target || nums[mid] < target) {
                    first = mid;
                } else {
                    last = mid;
                }
            }
            mid = (first + last) >> 1;
            if (mid == first || mid == last) {
                if (nums[first] == target) return first;
                if (nums[last] == target) return last;
                return -1;
            }
        }
        return -1;
    }
};
