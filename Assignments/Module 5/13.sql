-- Question-13 Create table given below: Salesperson and Customer
--  Answer=
use college;

create table SALSEPERSON(
S_No int,
S_NAME varchar(30),
CITY varchar(30),
COMM float,
primary key(S_No)
);

insert into SALSEPERSON(S_No, S_NAME, CITY, COMM)
values(1001,'Peel','Landon',.12),
(1002,'Serres','San Jose',.13),
(1004,'Motik','Landon',.11),
(1007,'Rafkin','Barcelona',.15),
(1003,'Axeirod','New York',.1);
------------------------------------------------------------------------------------------------------------------------------------------------------

create table CUSTOMER(
C_NM int,
C_NAME varchar(30),
CITY varchar(30),
RATING int,
S_NO int,
primary key(C_NM),
foreign key(S_NO)References SALSEPERSON(S_NO)
);

insert into CUSTOMER(C_NM, C_NAME, CITY, RATING, S_No)
values(201,'Hoffiman','Landon',100,1001),
(202,'Giovanne','Roe',200,1003),
(203,'Liu','San Jose',300,1002),
(204,'Grass','Barcelona',100,1002),
(206,'Clemens','Landon',300,1007),
(207,'Pereira','Roe',100,1004);

------------------------------------------------------------------------------------------------------------------------------------------------------
-- a) All orders for more than $1000.
select S_NO < 1000 from CUSTOMER;

------------------------------------------------------------------------------------------------------------------------------------------------------
-- b) Names and cities of all salespeople in London with commission above 0.12
select S_NAME,CITY from SALSEPERSON where COMM > 0.12 and CITY = 'London';

------------------------------------------------------------------------------------------------------------------------------------------------------
-- c) All salespeople either in Barcelona or in London
select S_NAME,CITY from SALSEPERSON where CITY in ('Barcelona','London');

------------------------------------------------------------------------------------------------------------------------------------------------------
-- d) All salespeople with commission between 0.10 and 0.12. (Boundary valuesshould be excluded).
select S_NAME,COMM from SALSEPERSON where COMM > 0.10 and COMM < 0.12;

------------------------------------------------------------------------------------------------------------------------------------------------------
-- e) All customers excluding those with rating <= 100 unless they are located inRome
select C_NAME from CUSTOMER where RATING <= 100 or CITY = 'Rome';



