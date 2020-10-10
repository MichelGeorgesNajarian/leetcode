# https://leetcode.com/problems/median-of-two-sorted-arrays/

# Runtime: 76 ms, faster than 99.82% of Python3 online submissions for Median of Two Sorted Arrays.
# Memory Usage: 14.1 MB, less than 6.01% of Python3 online submissions for Median of Two Sorted Arrays.

# Was done this way to finish as fast as possible but there is a better way to do it since arrays are already sorted

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums1 = nums1 + nums2
        nums1.sort()
        if (len(nums1) % 2 == 0):
            return (nums1[floor(len(nums1)/2) - 1] + nums1[floor(len(nums1)/2)])/2
        else:
            return nums1[floor(len(nums1)/2)]
