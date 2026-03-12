# Write your MySQL query statement below
SELECT email as EMAIL
FROM Person
GROUP BY Email
HAVING COUNT(*)>1