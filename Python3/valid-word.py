# https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/
# Runtime: 88 ms, faster than 38.86% of Python3 online submissions for Check If Word Is Valid After Substitutions.
# Memory Usage: 12.9 MB, less than 100.00% of Python3 online submissions for Check If Word Is Valid After Substitutions.
#
#
# First BAD attempt (too slow) but very intuitive:
# Runtime: 9928 ms <-- too long (better than 5.21% of other submissions
# Memory Usage: 82.4 MB
# class Solution:
#     def isValid(self, S: str) -> bool:
#         i = 1
#         while i < len(S) - 1:
#             if S[i-1] == 'a' and S[i] == 'b' and S[i+1] == 'c':
#                 temp = S[:i-1] + S[i+2:]
#                 return Solution.isValid(self, temp)
#             i = i + 1
#         if len(S) != 0:
#             return False
#         return True
        
class Solution:
    def isValid(self, S: str) -> bool:
        if len(S) < 3:
            return false
        stack = []
        for char in S:
            stack.append(char)
            if len(stack) > 2:
                if stack[-1] == 'c' and stack[-2] == 'b' and stack[-3] == 'a':
                    stack.pop()
                    stack.pop()
                    stack.pop()
        if len(stack) == 0:
            return True;
        return False;
            
            
