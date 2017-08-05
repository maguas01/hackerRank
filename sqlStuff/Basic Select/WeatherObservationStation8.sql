-- Query the list of CITY names from STATION which have vowels (i.e., a, e, i, o, and u) 
-- as both their first and last characters. Your result cannot contain duplicates.

SELECT city 
FROM station 
WHERE 
	(city LIKE '%a' or 
	 city LIKE '%e' or 
	 city LIKE '%i' or 
	 city LIKE '%o' or 
	 city LIKE '%u') 
	and 
	(city LIKE 'a%' or 
	 city LIKE 'e%' or 
	 city LIKE 'i%' or 
	 city LIKE 'o%' or 
	 city LIKE 'u%');