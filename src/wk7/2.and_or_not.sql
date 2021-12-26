-- AND
SELECT ContactName FROM customers WHERE Country = "France" AND City = "Lyon";

-- OR
SELECT ContactName FROM customers WHERE Country = "France" OR Country = "Italy";

-- NOT
SELECT ContactName FROM customers WHERE NOT Country = "France";

-- AND, OR, NOT
SELECT ContactName FROM Customers WHERE Country="Germany" AND (City="Berlin" OR City="Munchen");
