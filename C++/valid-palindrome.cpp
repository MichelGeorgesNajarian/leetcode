/*
* https://leetcode.com/problems/valid-palindrome/
* Runtime: 8 ms, faster than 85.67% of C++ online submissions for Valid Palindrome.
* Memory Usage: 9.4 MB, less than 57.14% of C++ online submissions for Valid Palindrome.
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        if (size < 2) return true;
        int begin = 0;
        size--;
        while (begin < size) {
            if (!isalnum(s[begin])) {
                begin++;
            } else if (!isalnum(s[size])) {
                size--;
            } else if (tolower(s[begin]) != tolower(s[size])) {
                return false;
            } else {
                begin++;
                size--;
            }
        }
        return true;
    }
};
