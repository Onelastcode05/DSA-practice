# Write your MySQL query statement below
SELECT(select DISTINCT Salary 
from employee
order by salary desc
limit 1 offset 1)
as secondhighestsalary