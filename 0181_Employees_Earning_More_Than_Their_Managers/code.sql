SELECT a.name as Employee
FROM Employee as a
join Employee as b
on a.managerId=b.id
where a.salary>b.salary;