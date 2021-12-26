-- COUNT, AVG, SUM
-- COUNT: Find the total number of products with price greater than 200
SELECT COUNT(ProductID) FROM products WHERE price > 200;

-- AVG: Find the average price of all products
SELECT AVG(price) FROM products;

-- SUME: Find the total price price of all products
SELECT SUM(price) FROM products;
