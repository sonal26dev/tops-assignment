-- Question- 12 Create table given below: Employee and IncentiveTable.
-- Answer=
use college;

create table  Employee(
Employee_ID int auto_increment,
First_Name varchar(20),
Last_Name varchar(20) not null,
Salary int,
Joining_Date datetime,
Department varchar(30),
primary key (Employee_ID)
);

create table Employee_backup(
Employee_ID int ,
First_Name varchar(20),
Last_Name varchar(20),
Salary int,
Joining_Date datetime,
Department varchar(30)
);

insert into Employee(First_Name,Last_Name,Salary,Joining_Date,Department)
values('John','Abraham',1000000,'2013-01-01 12.00.00 AM','Banking'),
('Michael','Clarke',800000,'2013-01-01 12.00.00 AM','Insurance'),
('Roy','Thomas',700000,'2013-02-01 12.00.00 AM','Banking'),
('Tom','Jose',600000,'2013-02-01 12.00.00 AM','Insurance'),
('Jerry','Pinto',650000,'2013-02-01 12.00.00 AM','Insurance'),
('Philip','Mathew',750000,'2013-01-01 12.00.00 AM','Services'),
('TestName1','123',650000,'2013-01-01 12.00.00 AM','Services'),
('TestName2','Lname%',600000,'2013-02-01 12.00.00 AM','Insurance');

select date_format(Joining_Date,'%d-%b-%y %h.%i.%s AM')from Employee;
-------------------------------------------------------------------------------------------------------------------------------------------------------------

create table  Incentive(
Employee_ref_ID int ,
Incentive_date date,
Incentive_amount int,
foreign key (Employee_ref_ID) references Employee (Employee_ID)
);

insert into Incentive(Employee_ref_ID,Incentive_date,Incentive_amount)
values(1,'2013-02-01',5000),
(2,'2013-02-01',3000),
(3,'2013-02-01',4000),
(1,'2013-01-01',4500),
(2,'2013-01-01',3500);

select date_format(Incentive_date,'%d-%b-%y ')from Incentive;

------------------------------------------------------------------------------------------------------------------------------------------------------------
-- a) Get First_Name from employee table using Tom name “Employee Name”.
select first_name "employee name" from employee;

------------------------------------------------------------------------------------------------------------------------------------------------------------
 -- b) Get FIRST_NAME, Joining Date, and Salary from employee table.
Select First_Name,Joining_Date,Salary from Employee;

------------------------------------------------------------------------------------------------------------------------------------------------------------
-- c) Get all employee details from the employee table order by First_Name Ascending and Salary descending?
 Select *from Employee order by First_Name,salary desc;

------------------------------------------------------------------------------------------------------------------------------------------------------------
-- d) Get employee details from employee table whose first name contains ‘J’.
select * from Employee where First_Name like 'J%';

------------------------------------------------------------------------------------------------------------------------------------------------------------
-- e) Get department wise maximum salary from employee table order by salaryascending?
Select Department,max(Salary) from Employee group by salary order by salary;

------------------------------------------------------------------------------------------------------------------------------------------------------------
-- f) Select first_name, incentive amount from employee and incentives table forthose employees who have incentives and incentive amount greater than 3000
select First_name,Incentive_amount from Employee A inner join Incentive B on A.Employee_ID=Employee_ref_ID and Incentive_amount>3000;

------------------------------------------------------------------------------------------------------------------------------------------------------------
-- g) Create After Insert trigger on Employee table which insert records in viewtable.
SELECT * FROM employee_backup;    







