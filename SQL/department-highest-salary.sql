-- https://leetcode.com/problems/department-highest-salary/
-- Runtime: 326 ms, faster than 97.58% of MySQL online submissions for Department Highest Salary.
-- Memory Usage: 0B, less than 100.00% of MySQL online submissions for Department Highest Salary.
SELECT m.DepName AS Department
    , emp.Name AS Employee
    , emp.Salary AS Salary
FROM (SELECT e.DepartmentId
     , d.Name AS DepName
     , max(e.Salary) as Salary
FROM Employee e
    INNER JOIN Department d ON d.Id = e.DepartmentId
GROUP BY e.DepartmentId) m
    INNER JOIN Employee emp ON emp.DepartmentID = m.DepartmentId AND emp.Salary = m.Salary
