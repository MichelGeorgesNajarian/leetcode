/*
* https://leetcode.com/problems/next-greater-element-i/
* Runtime: 3 ms, faster than 87.85% of Java online submissions for Next Greater Element I.
*Memory Usage: 41.1 MB, less than 7.41% of Java online submissions for Next Greater Element I.
*/

class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        Map<Integer, Integer> nextGreater = new HashMap<>();
        Stack<Integer> s = new Stack<>();
        
        for (int i = 0; i <nums2.length; i++) {
            while(!s.isEmpty() && s.peek() < nums2[i]) nextGreater.put(s.pop(), nums2[i]);
            s.push(nums2[i]);
        }
        for (int i = 0; i < nums1.length; i++) {
            nums1[i] = nextGreater.getOrDefault(nums1[i], -1);
        }
        s.clear();
        nextGreater.clear();
        return nums1;
    }
}
