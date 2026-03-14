# Write your MySQL query statement below
SELECT e.name AS EMPLOYEE
FROM Employee e
JOIN Employee m
ON e.managerId=m.id
WHERE e.salary>m.salary