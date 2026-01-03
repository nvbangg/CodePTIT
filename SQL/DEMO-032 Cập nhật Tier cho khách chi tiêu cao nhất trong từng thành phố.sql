WITH RankSpending AS (
    SELECT c.CustID,
        DENSE_RANK() OVER (
            PARTITION BY c.City
            ORDER BY SUM(p.Amount) DESC
        ) as RankNumber
    FROM Customer c
        JOIN SaleOrder s ON c.CustID = s.CustID
        JOIN Payment p ON s.OrderID = p.OrderID
    WHERE p.Status = 'PAID'
    GROUP BY c.CustID,
        c.City
)
UPDATE Customer c
    JOIN RankSpending r ON c.CustID = r.CustID
SET c.Tier = 'TOP_CITY'
WHERE r.RankNumber = 1;