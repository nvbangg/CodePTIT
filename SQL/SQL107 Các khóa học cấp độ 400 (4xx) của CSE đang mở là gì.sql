SELECT dept,
  number,
  title
FROM Class
WHERE dept = 'CSE'
  AND number BETWEEN 400 AND 499;