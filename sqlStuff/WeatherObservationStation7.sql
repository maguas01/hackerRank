-- Query the list of CITY names ending with vowels (a, e, i, o, u) from STATION. Your result cannot contain duplicates.

SELECT city 
FROM station 
WHERE
	city LIKE '%a' or 
	city LIKE '%e' or 
	city LIKE '%i' or 
	city LIKE '%o' or 
	city LIKE '%u' 
GROUP BY city;
