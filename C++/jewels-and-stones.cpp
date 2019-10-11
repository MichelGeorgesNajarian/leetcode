/**
 *
 * https://leetcode.com/problems/jewels-and-stones/
 * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Jewels and Stones.
 * Memory Usage: 8.2 MB, less than 97i50% of C++ online submissions for Jewels and Stones.
 *
 */


class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int numS = 0;
        char currLetter;
        int s_size = S.size();
        int j_size = J.size();
        for (int i = 0; i<j_size; i++){
            currLetter = J[i];
            int j = 0;
            while (j < s_size){
                if (S[j] == J[i]){
                    numS++;
                }
                j++;
            }
        }
        return numS;
    }
};
