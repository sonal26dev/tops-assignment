/*Q-9. Write a Program to show swap of two No's without using third variable. */
import 'dart:io';

void main() {
  stdout.write("Enter the Value of A: ");
  int a = int.parse(stdin.readLineSync().toString());

  stdout.write("Enter the Value of B: ");
  int b = int.parse(stdin.readLineSync().toString());

  print("Before swapping: a = ${a} and b = ${b}");
  a = a + b;
  b = a - b;
  a = a - b;
  print("After swapping: a = ${a} and b = ${b}");
}
