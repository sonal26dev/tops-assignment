/*Q-8. Write a program to calculate sum of 5 subjects & find the percentage. Subject marks entered by user. */
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

  print("Total marks obtained: $totalMarks");
  print("Percentage: $percentage%");
}
