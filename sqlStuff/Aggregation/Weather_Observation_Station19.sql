--Consider p1 (a,c) and p2(b,d) to be two points on a 2D plane
--where (a,b) are the respective minimum and maximum values of
--Northern Latitude (LAT_N) and (c,d) are the respective minimum and maximum values of Western Longitude (LONG_W) in STATION.
-- Query the Euclidean Distance between points p1 and p2 and format your answer to display decimal digits.

Query the Euclidean Distance between points and and format your answer to display decimal digits.

SELECT 
    TRUNCATE( 
        SQRT( 
            POWER( MIN(lat_n) - MAX(lat_n) , 2) + 
            POWER( MIN(long_w) - MAX(long_w), 2) 
        ) 
    ,4)
FROM STATION;