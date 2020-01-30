-- https://leetcode.com/problems/rising-temperature/
-- Runtime: 342 ms, faster than 99.06% of MySQL online submissions for Rising Temperature.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Rising Temperature.

SELECT temp1.Id
from Weather temp1, Weather temp2
WHERE temp1.Temperature > temp2.Temperature
    AND TO_DAYS(temp1.RecordDate) = TO_DAYS(temp2.RecordDate) + 1
