SELECT email
FROM person
group by email
having count(email)>1