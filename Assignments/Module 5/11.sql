-- Question- 11 Create Table Name : Student and Exam.
-- Answer=
create database college;
use college;

create table student(
Roll_No int auto_increment,
Student_Name varchar(50),
Branch varchar(50),
primary key(Roll_no) 
);

insert into student(Student_Name,Branch)
values("Purvika","Computer Science"),
("Rajesh","Electronic and Com"),
("Yogesh","Electronic and Com");

------------------------------------------------------------------------------------------------------------------------------------------------------------
create table Exam(
Roll_No int auto_increment,
S_code varchar(5),
Marks int,
P_code varchar(2),
foreign key(Roll_No)References student(Roll_No)
);

insert into Exam(Roll_no, S_code, Marks, P_code)
values(1,"CS11",95,"CS"),
(1,"CS12",80,"CS"),
(2,"EC101",90,"EC"),
(2,"EC102",86,"EC"),
(3,"EC101",93,"EC"),
(3,"EC102",94,"EC");




