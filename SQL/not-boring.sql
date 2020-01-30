-- https://leetcode.com/problems/not-boring-movies/
-- Runtime: 271 ms, faster than 84.10% of MySQL online submissions for Not Boring Movies.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Not Boring Movies.

# Write your MySQL query statement below
SELECT id, movie, description, rating
FROM cinema
WHERE id%2 != 0
    AND description != "boring"
ORDER BY rating DESC
