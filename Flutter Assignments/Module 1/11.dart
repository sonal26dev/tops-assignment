/*Q-11. Write a Program to check the given year is leap year or not. */
import 'dart:io';

void main() {
  stdout.write("Enter a Year to check if it is a Leap Year: ");
  var year = int.parse(stdin.readLineSync().toString());
  
  if (year % 400 == 0) {
    print("$year is a leap year.");
  } else if (year % 100 == 0) {
    print("$year is not a leap year.");
  } else if (year % 4 == 0) {
    print("$year is a leap year.");
  } else {
    print("$year is not a leap year.");
  }
}
