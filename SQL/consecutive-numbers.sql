-- https://leetcode.com/problems/consecutive-numbers/
-- Runtime: 421 ms, faster than 95.83% of MySQL online submissions for Consecutive Numbers.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Consecutive Numbers.

select distinct Num AS consecutiveNums from Logs
where (Id + 1, Num) in (select * from Logs) and (Id + 2, Num) in (select * from Logs)
