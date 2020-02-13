/*
* https://leetcode.com/problems/reverse-words-in-a-string/
* Runtime: 4 ms, faster than 71.59% of Java online submissions for Reverse Words in a String.
* Memory Usage: 41.6 MB, less than 5.37% of Java online submissions for Reverse Words in a String.
*/

class Solution {
    public String reverseWords(String s) {
        String reverse = reverseString(s);
        StringBuilder ret = new StringBuilder();
        int start = -1;
        Boolean first = true;
        for (int i = 0; i < reverse.length(); i++) {
            if (reverse.charAt(i) == ' ' & start != -1) {
                if (!first) {
                    ret.append(" ");
                }
                first = false;
                ret.append(reverseString(reverse.substring(start, i)));
                start = -1;
            } else if (start == -1 && reverse.charAt(i) != ' ') {
                start = i;
            }
        }
        if (ret.length() > 0 && start > -1) ret.append(" ");
        if (start > -1) ret.append(reverseString(reverse.substring(start, reverse.length())));
        return ret.toString();
    }
    
    public String reverseString(String s) {
        //System.out.println(s);
        char[] c = new char[s.length()];
        int j = s.length() - 1;
        for (int i = 0; i <= j; i++) {
            c[i] = s.charAt(j);
            c[j] = s.charAt(i);
            j--;
        }
        return new String(c);
    }
}
