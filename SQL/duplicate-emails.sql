--https://leetcode.com/problems/duplicate-emails/
--Runtime: 182ms, faster than 81.40% of MySQL online submissions for Duplicate Emails.
--Memory Usage: 0B, less than 100.00% of MySQL online submissions for Duplicate Emails.

SELECT Email
FROM Person
GROUP BY Email
HAVING COUNT(Email) > 1
