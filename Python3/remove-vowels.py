# https://leetcode.com/problems/remove-vowels-from-a-string/
# Runtime: 24 ms, faster than 85.78% of Python3 online submissions for Remove Vowels from a String.
# Memory Usage: 12.7 MB, less than 100.00% of Python3 online submissions for Remove Vowels from a String.

class Solution:
    def removeVowels(self, S: str) -> str:
        i = 0
        while i < len(S):
            if S[i] == 'a' or S[i] == 'e' or S[i] == 'i' or S[i] == 'o' or S[i] == 'u':
                S = S[:i] + S[i + 1:]
                i = i - 1
            i = i + 1
        return S
