-- https://leetcode.com/problems/combine-two-tables/
-- Runtime: 209 ms, faster than 83.69% of MySQL online submissions for Combine Two Tables.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Combine Two Tables.

SELECT per.FirstName
     , per.LastName
     , adr.City
     , adr.State
FROM Person AS per
LEFT JOIN Address as adr
    ON per.PersonId = adr.PersonId
