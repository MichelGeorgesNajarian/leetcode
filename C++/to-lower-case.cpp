/**
 *
 * https://leetcode.com/problems/to-lower-case/
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for To Lower Case.
 * Memory Usage: 8.2 MB, less than 58.97% of C++ online submissions for To Lower Case.
 *
 */
 
class Solution {
public:
    string toLowerCase(string str) {
        for (char& letter : str){
            if (letter >= 'A' && letter <= 'Z') {
                letter += 32;
            }
        }
        return str;
    }
};
