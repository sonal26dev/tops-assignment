/*Q-3. Write a program to make a square and cube of number. */
import 'dart:io';

void main() {
  stdout.write("Enter Number : ");
  int num = int.parse(stdin.readLineSync().toString());

  int square = num * num;
  int cube = num * num * num;
  print("Square of $num is $square ");
  print("cube of $num is $cube");
}
