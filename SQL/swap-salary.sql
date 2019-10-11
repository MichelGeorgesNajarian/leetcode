-- https://leetcode.com/problems/swap-salary/
-- Runtime: 141 ms, faster than 80.64% of MySQL online submissions for Swap Salary.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Swap Salary.

update salary
SET
    sex = CASE WHEN sex = "m" THEN "f"
               ELSE "m"
          END

