# https://leetcode.com/problems/fizz-buzz/
# Runtime: 40 ms, faster than 78.18% of Python3 online submissions for Fizz Buzz.
# Memory Usage: 13.8 MB, less than 100.00% of Python3 online submissions for Fizz Buzz.

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        rem5 = 4
        rem3 = 2
        ret = []
        i = 1
        while i < n+1:
            if rem3 == 0 and rem5 == 0:
                ret.append("FizzBuzz")
                rem3 = 2
                rem5 = 4
            elif rem3 == 0:
                ret.append("Fizz")
                rem3 = 2
                rem5 = rem5 - 1
            elif rem5 == 0:
                ret.append("Buzz")
                rem5 = 4
                rem3 = rem3 - 1
            else:
                ret.append(str(i))
                rem3 = rem3 - 1
                rem5 = rem5 - 1
            i = i + 1
        return ret
