# Write your MySQL query statement below
SELECT w1.id as id
FROM Weather as w1
JOIN Weather as W2
ON w1.recordDate = DATE_ADD(w2.recordDate, INTERVAL 1 DAY)
WHERE w1.temperature > w2.temperature ;