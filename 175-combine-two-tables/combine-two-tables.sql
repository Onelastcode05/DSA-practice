# Write your MySQL query statement below
select firstName,lastName,city,state
from person p
left join address m
on p.personId=m.personId