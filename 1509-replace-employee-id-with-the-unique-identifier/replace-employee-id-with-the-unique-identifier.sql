# Write your MySQL query statement below
select e.unique_id,em.name from Employees em
LEFT JOIN EmployeeUNI e
ON em.id=e.id;