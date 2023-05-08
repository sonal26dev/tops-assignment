/*Q-36. Create a class named 'Member' having the following members: 
Data members 1 - Name 2 - Age 3       
Q-37. Phone number 4 - Address 5 - Salary It also has a method named 'printSalary' which prints the salary of the members. Two classes 'Employee' and 'Manager' inherits the 'Member' class. The 'Employee' and 'Manager' classes have data members'specialization' and 'department' respectively. Now, assign name, age, phone number, address and salary to an employee and a manager by making an object of both of these classes and print the same.*/

class Member {
  var Name;
  var Age;
  var PhoneNumber;
  var Address;
  var Salary;

  void printSalary() {
    print("Salary: \$${Salary.toStringAsFixed(2)}");
  }
}

class Employee extends Member {
  var specialization;
}

class Manager extends Member {
  var department;
}

void main() {
  var employee = Employee();
  employee.Name = 'Asmita';
  employee.Age = 25;
  employee.PhoneNumber = '0123456789';
  employee.Address = '123 abc, defg,surat';
  employee.Salary = 80000;
  employee.specialization = 'Software Engineer';

  var manager = Manager();
  manager.Name = 'Shardhdha';
  manager.Age = 26;
  manager.PhoneNumber = '0987654321';
  manager.Address = '321 hijk, xyz, surat';
  manager.Salary = 100000;
  manager.department = 'Engineering';

  print('''
*** EMPLOYEE DETAILS ***
Name: ${employee.Name}
Age: ${employee.Age}  
Phone Number: ${employee.PhoneNumber}
Address: ${employee.Address}''');
employee.printSalary();

  print('''\n
*** MANAGER DETAILS ***
Name: ${manager.Name}
Age: ${manager.Age}
Phone Number: ${manager.PhoneNumber}
Address: ${manager.Address}''');
manager.printSalary();
}
