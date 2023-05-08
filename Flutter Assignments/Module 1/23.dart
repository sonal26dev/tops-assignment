/*Q-23. Write a program you have to make a summation of first and last Digit. (E.g. 1234 ans:-5) */
import 'dart:io';

void main() {
  stdout.write("Enter any Integer: ");
  int number = int.parse(stdin.readLineSync().toString());

  int lastDigit = number % 10;
  int firstDigit = number;

  while (firstDigit >= 10) {
    firstDigit ~/= 10;
  }
  int sum = firstDigit + lastDigit;
  print("The Summation of the Fisrt: ${firstDigit} and Last: ${lastDigit} Digits is = $sum");
}
