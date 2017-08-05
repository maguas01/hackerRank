-- Let be the number of CITY entries in STATION, and let be the number of distinct CITY names in STATION; query the value of from STATION. 
-- In other words, find the difference between the total number of CITY entries in the table and the number of distinct CITY entries in 
-- the table.

SELECT COUNT(city) - COUNT(DISTINCT city) 
FROM station;