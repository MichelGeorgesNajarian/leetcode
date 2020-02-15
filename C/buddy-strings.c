/*
* https://leetcode.com/problems/buddy-strings/
* Runtime: 0 ms, faster than 100.00% of C online submissions for Buddy Strings.
* Memory Usage: 6.9 MB, less than 100.00% of C online submissions for Buddy Strings.
*/



bool buddyStrings(char * A, char * B){
    int sizeA = strlen(A);
    int sizeB = strlen(B);
    if (sizeA != sizeB) {
        free(A);
        free(B);
        return false;
    }
    
    int i;
    if (!strcmp(A, B)) {
        int *numLetter = calloc(26, sizeof(int));
        for (i = 0; i < sizeA; i++) {
            *(numLetter + ((int) *(A + i) - (int) 'a')) += 1;
        }
        for (i = 0; i < 26; i++) {
            if (numLetter[i] > 1) {
                free(numLetter);
                free(A);
                free(B);
                return true;
            }
        }
        return false;
    } 
    int first = -1;
    int second = -1;
    for (i = 0; i < sizeA; i++) {
        if (*(A + i) != *(B + i)) {
            if (first == -1) {
                first = i;
            } else if (second == -1) {
                second = i;
            } else {
                free(A);
                free(B);
                return false;
            }
        }
    }
    if (second != -1 && *(A + first) == *(B + second) && *(A + second) == *(B + first)) {
        free(A);
        free(B);
        return true;
    }
    free(A);
    free(B);
    return false;
}
