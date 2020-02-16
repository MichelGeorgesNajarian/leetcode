/*
* https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
* Runtime: 16 ms, faster than 95.65% of C online submissions for Minimum Number of Steps to Make Two Strings Anagram.
* Memory Usage: 9.8 MB, less than 100.00% of C online submissions for Minimum Number of Steps to Make Two Strings Anagram.
*/

int minSteps(char * s, char * t){
    int numS[26];
    int numT[26];
    int i = 0;
    memset(numS, 0, 26*sizeof(int));
    memset(numT, 0, 26*sizeof(int));
    int sizeS = strlen(s);
    //counting num of occurence of each letter in both strings
    for (i = 0; i < sizeS; i++) {
        numS[(int) s[i] - 'a']++;
        numT[(int) t[i] - 'a']++;
    }
    int ret = 0;
    for (i = 0; i < 26; i++) {
        //this if case is to not overcount the number of changes to do
        //we can do it like that because we know that s and t are the same length
        if (numS[i] - numT[i] > 0) {
            ret += numS[i] - numT[i];
        }
    }
    return ret;
}
