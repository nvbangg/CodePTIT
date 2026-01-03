UPDATE Users
SET name = CONCAT(
        UPPER(SUBSTR(name, 1, 1)),
        LOWER(SUBSTR(name, 2))
    )
WHERE name IS NOT NULL;