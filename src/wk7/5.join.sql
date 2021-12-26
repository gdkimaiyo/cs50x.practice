-- JOIN
-- Combine two rows from 2 or more tables based on a related column between them
SELECT orders.OrderID, customers.CustomerName, orders.OrderDate
FROM orders
INNER JOIN customers ON customers.CustomerID = orders.CustomerID;
