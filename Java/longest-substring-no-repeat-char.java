/*
* https://leetcode.com/problems/longest-substring-without-repeating-characters/
* Runtime: 5 ms, faster than 87.38% of Java online submissions for Longest Substring Without Repeating Characters.
* Memory Usage: 38.8 MB, less than 98.90% of Java online submissions for Longest Substring Without Repeating Characters
*/

class Solution {

    public int lengthOfLongestSubstring(String s) {
        // Store 2 index of last time character was seen
        if (s.length() == 0) return 0;
        HashMap < Character, Integer > hmap = new HashMap<>();
        int max = 1;
        int currentFirstIndex = 0;
        for (int i = 0; i < s.length(); i++) {
            // if we encountered the letter before
            if (hmap.containsKey(s.charAt(i))) {
                //if the last time the char was seen was before the current minimum index, then it is not a duplicate in the substring, should update map with current value
                if (hmap.get(s.charAt(i)) < currentFirstIndex) {
                    hmap.put(s.charAt(i), i);
                } else {
                    //duplicate letter in current substring
                    currentFirstIndex = hmap.get(s.charAt(i)) + 1;// new min is 1 index up from the last time the letter was seen
                    hmap.put(s.charAt(i), i);
                }
            } else { // if we're encountering the letter for the first time
                hmap.put(s.charAt(i), i);
            }
            max = (max < i - currentFirstIndex + 1) ? i - currentFirstIndex + 1 : max;
        }
        return max;
    }
}