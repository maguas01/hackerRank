--Given the CITY and COUNTRY tables, query the names of all the continents (COUNTRY.Continent)
--and their respective average city populations (CITY.Population) rounded down to the nearest
--integer.

SELECT COUNTRY.continent, FLOOR(AVG(CITY.population))
FROM CITY JOIN COUNTRY
ON CITY.countryCode = COUNTRY.code
GROUP BY COUNTRY.continent;