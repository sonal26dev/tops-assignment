Question- 08 What is SQL Key Constraints writing an Example of SQL Key Constraints
Answer= 
Constraints are the rules that we can apply on the type of data in a table. 
That is, we can specify the limit on the type of data that can be stored in a particular column in a table using constraints. 

The available constraints in SQL are: 
Null, Check, Default, Unique, Primary Key, Foreign Key

••• NOT NULL Constraint •••
• The NOT NULL constraint in a column means that the column cannot store NULL values. 
• For example,
CREATE TABLE Colleges (
  college_id INT NOT NULL,
  college_code VARCHAR(20) NOT NULL,
  college_name VARCHAR(50)
);
• Here the college_id and the college_code columns of the Colleges table won't allow NULL values.

••• CHECK Constraint •••
• The CHECK constraint checks the condition before allowing values in a table. 
• For example,
CREATE TABLE Orders (
  order_id INT PRIMARY KEY,
  amount int CHECK (amount >= 100)
);
• Here, the value of the amount column must be greater than or equal to 100. If not, the SQL statement results in an error.

••• DEFAULT CONSTRAINT •••
• The DEFAULT constraint is used to set the default value if we try to store NULL in a column. 
• For example,
CREATE TABLE College (
  college_id INT PRIMARY KEY,
  college_code VARCHAR(20),
  college_country VARCHAR(20) DEFAULT 'US'
);
• Here, the default value of the college_country column is US.

••• Unique Key•••
• Unique key constraints also identifies an individual table uniquely in a  relation or table.
• A table can have more than one unique key unlike primary key.
• Unique key constraints can accept only one NULL value for column.
• Unique constraints are also referenced by the foreign key of another table.
• The UNIQUE constraint in a column means that the column must have unique value. 
• For example,
CREATE TABLE Colleges (
  college_id INT NOT NULL UNIQUE,
  college_code VARCHAR(20) UNIQUE,
  college_name VARCHAR(50)
);
• Here, the value of the college_code column must be unique. Similarly, the value of college_id must be unique as well as it cannot store NULL values.

••• Primary Key •••
• A primary key is a column of table which uniquely identifies each
• tuple (row) in that table.
• Primary key enforces integrity constraints to the table.
• Only one primary key is allowed to use in a table.
• The primary key does not accept the any duplicate and NULL values.
• The primary key value in a table changes very rarely so it is chosen with care
• where the changes can occur in a seldom manner.
• A primary key of one table can be referenced by foreign key of another table.
• For example,
CREATE TABLE Colleges (
  college_id INT PRIMARY KEY,
  college_code VARCHAR(20) NOT NULL,
  college_name VARCHAR(50)
);
• Here, the value of the college_id column is a unique identifier for a row. Similarly, it cannot store NULL value and must be UNIQUE.

••• Foreign Key •••
• When "one" table's primary key field is added to a related "many" table in 
order to create the common field which relates the two tables, it is called a 
foreign key in the "many" table.
• In the example given below, salary of an employee is stored in salary table.
• Relation is established via is stored in "Employee" table. To identify the salary 
of "Jforeign key column “Employee_ID_Ref” which refers “Employee_ID” field 
in Employee table.
• of "Jhon" is stored in "Salary" table. But his employee info
• For example, salary hon", his "employee id" is stored with each salary record.
• The FOREIGN KEY (REFERENCES in some databases) constraint in a column is used to reference a record that exists in another table. 
• For example,
 CREATE TABLE Orders (
  order_id INT PRIMARY KEY,
  customer_id int REFERENCES Customers(id)
);
• Here, the value of the college_code column references the row in another table named Customers.
• It means that the value of customer_id in the Orders table must be a value from the id column of the Customers table.