SELECT dept,
    number,
    SUBSTR(title, 1, 12) AS short_title
FROM Class