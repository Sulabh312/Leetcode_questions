# Write your MySQL query statement below
SELECT firstName, lastName, city, state 
FROM Person as P  LEFT JOIN ADDRESS as A
ON P.personId = A.personId;
