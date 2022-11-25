/*query1*/
SELECT COUNT(*),position 
FROM players 
GROUP BY position;
/*query2*/
SELECT year, SUM(gp) AS total_games_played 
FROM player_playoffs 
GROUP BY year 
UNION 
SELECT year, SUM(gp) AS total_games_played 
FROM player_regular_season 
GROUP BY year 
ORDER BY total_games_played 
DESC 
LIMIT 5;
/*query3*/
ALTER TABLE player_regular_season_career ADD total_games_played INT;
ALTER TABLE player_regular_season_career ADD eff INT;
/*query4*/
SELECT COUNT(*) 
FROM player_regular_season AS num
WHERE (year = 1990 AND num.gp) > (year !=1990 AND num.gp);
