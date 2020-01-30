-- https://leetcode.com/problems/exchange-seats/
-- Runtime: 246 ms, faster than 92.60% of MySQL online submissions for Exchange Seats.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Exchange Seats.

SELECT (CASE
            WHEN (id = countNum) and (id%2 = 1) then id
            WHEN (id%2 = 1) then id + 1
            ELSE id - 1
       END) AS id
       , student
FROM seat, (select count(*) as countNum from seat) cnt
ORDER BY id ASC
