/*
* https://leetcode.com/problems/reverse-string/
* Runtime: 36 ms, faster than 99.55% of C++ online submissions for Reverse String.
* Memory Usage: 15.2 MB, less than 95.12% of C++ online submissions for Reverse String.
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = s.size() - 1;        
        for (int i = 0; i < j; i++) {
            char temp = s[i];
            s[i] = s[j];
            s[j--] = temp;
        }
    }
};
