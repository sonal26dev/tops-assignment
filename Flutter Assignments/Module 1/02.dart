/*Q-2. Write a program to make addition, Subtraction, Multiplication and Division of Two Numbers. */
import 'dart:io';

void main() {
  stdout.write("Enter the Value of A: ");
  var a = int.parse(stdin.readLineSync().toString());

  stdout.write("Enter the Value of B: ");
  var b = int.parse(stdin.readLineSync().toString());

  print("Addition of $a and $b is = ${a + b}");
  print("Subtraction of $a and $b is = ${a - b}");
  print("Multiplication of $a and $b is = ${a * b}");
  print("Division of $a and $b is = ${a / b}");
}
