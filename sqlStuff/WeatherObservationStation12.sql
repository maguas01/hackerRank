-- Query the list of CITY names from STATION that do not start with vowels and do not end with vowels. 
-- Your result cannot contain duplicates.

SELECT city 
FROM station 
WHERE (
    city NOT LIKE 'a%' AND
    city NOT LIKE 'e%' AND 
    city NOT LIKE 'i%' AND 
    city NOT LIKE 'o%' AND 
    city NOT LIKE 'u%' 
    ) and ( 
    city NOT LIKE '%a' AND
    city NOT LIKE '%e' AND 
    city NOT LIKE '%i' AND 
    city NOT LIKE '%o' AND 
    city NOT LIKE '%u'
    ) 
GROUP BY city;