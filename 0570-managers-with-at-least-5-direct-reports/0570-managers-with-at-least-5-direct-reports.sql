# Write your MySQL query statement below


-- select name from Employee where id in (select managerID  from Employee group by managerId having count(managerID) >= 5 ) ;



-- SELF JOIN APPROACH 
# Write your MySQL query statement below
select e1.name 
from Employee e1
join Employee e2 on e1.id = e2.managerId
group by e1.id
having count(e2.managerId) >= 5;
