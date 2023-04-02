/*Q-14. Write a program to find the Max number from the given three number using Ternary Operator */
import 'dart:io';

void main() {
  print("Enter any Three Number");
  int num1 = int.parse(stdin.readLineSync().toString());
  int num2 = int.parse(stdin.readLineSync().toString());
  int num3 = int.parse(stdin.readLineSync().toString());

  int max = (num1 > num2)
      ? ((num1 > num3) ? num1 : num3)
      : ((num2 > num3) ? num2 : num3);

  print("The Maximum Number is : $max");
}
