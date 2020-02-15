/*
* https://leetcode.com/problems/remove-vowels-from-a-string/
* Runtime: 2 ms, faster than 28.65% of Java online submissions for Remove Vowels from a String.
* Memory Usage: 37.6 MB, less than 100.00% of Java online submissions for Remove Vowels from a String.
*/

class Solution {
    public String removeVowels(String S) {
        return S.replaceAll("a|e|i|o|u", "");
    }
}
