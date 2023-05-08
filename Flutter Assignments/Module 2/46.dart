/*Q-46. Write a program which will ask the user to enter his/her marks (out of 100). Define a method that will display grades according to the marks entered as below: 
Marks Grade 
 91-100 AA
 81-90 B
 71-80 BB
 61-70 BC
 51-60 CD
 41-50 DD
 <=40 Fail                     */
 import 'dart:io';

void main() {
  stdout.write('Enter your marks (out of 100): ');
  var marks = int.parse(stdin.readLineSync()!);

  if (marks >= 91 && marks <= 100) {
    print('AA');
  } else if (marks >= 81 && marks <= 90) {
    print('B');
  } else if (marks >= 71 && marks <= 80) {
    print('BB');
  } else if (marks >= 61 && marks <= 70) {
    print('BC');
  } else if (marks >= 51 && marks <= 60) {
    print('CD');
  } else if (marks >= 41 && marks <= 50) {
    print('DD');
  } else {
    print('Fail');
  }
}
