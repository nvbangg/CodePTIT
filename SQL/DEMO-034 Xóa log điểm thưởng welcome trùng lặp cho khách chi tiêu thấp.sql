DELETE l1 
FROM LoyaltyHistory l1 
JOIN LoyaltyHistory l2 ON l1.CustID = l2.CustID AND l1.Reason = l2.Reason 
 AND l1.PointsChange = l2.PointsChange
WHERE l1.Reason = 'WELCOME_BONUS' AND(l1.ChangeDate < l2.ChangeDate
OR l1.ChangeDate = l2.ChangeDate AND l1.HistoryID < l2.HistoryID) 
AND (
 SELECT COALESCE(SUM(TotalAmount),0)
 FROM SaleOrder 
 WHERE CustID = l1.CustID
) < 1000;