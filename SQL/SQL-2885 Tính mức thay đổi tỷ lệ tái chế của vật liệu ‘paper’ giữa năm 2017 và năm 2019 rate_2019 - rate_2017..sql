SELECT MAX(CASE WHEN year = 2019 THEN recycling_rate END) - MAX(CASE WHEN year = 2017 THEN recycling_rate END) AS rate_difference
FROM recycling_rates
WHERE material = 'paper';