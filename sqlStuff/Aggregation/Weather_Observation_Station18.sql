--Consider and to be two points on a 2D plane.

    -- a happens to equal the minimum value in Northern Latitude (LAT_N in STATION).
    -- b happens to equal the minimum value in Western Longitude (LONG_W in STATION).
    -- c happens to equal the maximum value in Northern Latitude (LAT_N in STATION).
    -- d happens to equal the maximum value in Western Longitude (LONG_W in STATION).

 -- Query the Manhattan Distance between points p1 and p2  and round it to a scale of decimal places.

SELECT ROUND(
    ABS( MAX(lat_n) - MIN(lat_n) ) + 
    ABS( MAX(long_w) - MIN(long_w) ), 4
    ) 
FROM station;