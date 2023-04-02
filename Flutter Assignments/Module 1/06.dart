/*Q-6. Write a program to find the simple Interest. */
import 'dart:io';

void main() {
  stdout.write("Enter The Principal: ");
  var principal = double.parse(stdin.readLineSync().toString());

  stdout.write("Enter The Rate: ");
  var rate = double.parse(stdin.readLineSync().toString());

  stdout.write("Enter The Time: ");
  var time = double.parse(stdin.readLineSync().toString());

  double simpleInterest = (principal * rate * time) / 100;

  print("Simple Interest is :$simpleInterest");
}
