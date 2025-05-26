-- SELECT 
--     p.firstName, 
--     p.lastName, 
--     a.city, 
--     a.state
-- FROM Person p
-- LEFT JOIN Address a
-- ON p.personId = a.personId


select
p.firstName,
p.lastName,
a.city,
a.state
from Person P
left join Address a
ON p.personID = a.personId