-- https://leetcode.com/problems/customers-who-never-order/
-- Runtime: 235 ms, faster than 78.98% of MySQL online submissions for Customers Who Never Order.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Customers Who Never Order.

SELECT ct.Name AS Customers
FROM Customers as ct
LEFT JOIN Orders as ord
    ON ct.Id = ord.CustomerId
WHERE ord.Id IS NULL
