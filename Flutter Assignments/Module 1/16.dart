/*Q-16. Write a program user enter the 5 subjects mark. You have to make a total and find the percentage. percentage > 75 you have to print “Distinction” percentage > 60 and percentage <= 75 you have to print “First class” percentage >50 and percentage <= 60 you have to print “Second class” percentage > 35 and percentage <= 50 you have to print “Pass class” Otherwise print “Fail”            */
import 'dart:io';

void main() {
  print("Enter marks of 5 Subjects:");
  int sub1 = int.parse(stdin.readLineSync().toString());
  int sub2 = int.parse(stdin.readLineSync().toString());
  int sub3 = int.parse(stdin.readLineSync().toString());
  int sub4 = int.parse(stdin.readLineSync().toString());
  int sub5 = int.parse(stdin.readLineSync().toString());

  int totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;
  double percentage = (totalMarks / 500) * 100;

  print("Total marks: $totalMarks");
  print("Percentage: $percentage%");

  if (percentage > 75) {
    print("Distinction");
  } else if (percentage > 60 && percentage <= 75) {
    print("First Class");
  } else if (percentage > 50 && percentage <= 60) {
    print("Second Class");
  } else if (percentage > 35 && percentage <= 50) {
    print("Pass Class");
  } else {
    print("Fail");
  }
}
