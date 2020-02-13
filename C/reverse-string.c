/*
* https://leetcode.com/problems/reverse-string/
* Runtime: 40 ms, faster than 98.67% of C online submissions for Reverse String.
* Memory Usage: 13.5 MB, less than 90.00% of C online submissions for Reverse String.
*/

void reverseString(char* s, int sSize){
    int j = sSize - 1;
    int i = 0;
    char temp;
    for (i; i < j; i++) {
        temp = *(s + i);
        *(s + i) = *(s + j);
        *(s + j) = temp;
        j--;
    }
}
