# https://leetcode.com/problems/valid-parentheses/
# Runtime: 24 ms, faster than 90.53% of Python3 online submissions for Valid Parentheses.
# Memory Usage: 12.8 MB, less than 100.00% of Python3 online submissions for Valid Parentheses.

class Solution:
    def isValid(self, s: str) -> bool:
        i = 0;
        li = []
        while i < len(s):
            if s[i] == '(':
                li.append(')')
            elif s[i] == '[':
                li.append(']');
            elif s[i] == '{':
                li.append('}')
            elif s[i] == ')' or s[i] == ']' or s[i] == '}':
                if len(li) == 0:
                    return False
                elif li.pop() != s[i]:
                    return False
            i = i + 1
        if len(li) != 0:
            return False
        return True
