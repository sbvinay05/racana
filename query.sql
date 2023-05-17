// 1. Write SQL query to create the table
create table cities (
ID INT ,
NAME VARCHAR(200),
STATE VARCHAR(200)
);

//2. Write SQL query to insert the data
INSERT INTO cities VALUES (1,"BENGALURU","KA"),(2,"MYSORE","KA"),(3,"DELHI","DL"),(4,"MUMBAI","MH"),(5,"COLCUTTA","WB"),(6,"CHENNAI","TN");

//3. Write SQL query to list all the cities sorted by name in ascending order
SELECT * FROM cities order by name;

//4. Write SQL query to get the below output (List of states with count of cities)
SELECT STATE ,COUNT(NAME) FROM cities order by COUNT;
