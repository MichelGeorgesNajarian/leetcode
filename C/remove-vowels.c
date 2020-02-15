/*
* https://leetcode.com/problems/remove-vowels-from-a-string/
* Runtime: 0 ms, faster than 100.00% of C online submissions for Remove Vowels from a String.
* Memory Usage: 7.8 MB, less than 100.00% of C online submissions for Remove Vowels from a String.
*/

char * removeVowels(char * S){
    int i = 0;
    int size = strlen(S);
    for (i; i < size; i++) {
        if (*(S + i*sizeof(char)) == 'a' || *(S + i*sizeof(char)) == 'e' || *(S + i*sizeof(char)) == 'i' || *(S + i*sizeof(char)) == 'o' || *(S + i*sizeof(char)) == 'u') {
            char *temp = malloc(size*sizeof(char));
            memset(temp, '\0', size*sizeof(char));
            size--;
            memcpy(temp, S, (i)*sizeof(char));
            memcpy(temp + i*sizeof(char), S + (i + 1)*sizeof(char), size - i);
            free(S);
            S = temp;
            i--; 
        }
    }
    return S;
}
