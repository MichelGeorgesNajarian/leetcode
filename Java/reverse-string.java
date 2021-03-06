/*
* https://leetcode.com/problems/reverse-string/
* Runtime: 1 ms, faster than 99.25% of Java online submissions for Reverse String.
* Memory Usage: 42.9 MB, less than 99.41% of Java online submissions for Reverse String.
*/

class Solution {
    public void reverseString(char[] s) {
        int j = s.length - 1;
        char temp;
        for (int i = 0; i < j; i++) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
        }
    }
}
