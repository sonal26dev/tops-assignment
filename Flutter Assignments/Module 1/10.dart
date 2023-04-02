/*Q-10. Write a Program to check the given number is Positive, Negative. */
import 'dart:io';

void main() {
  stdout.write("Enter Any Number:  ");
  var num = int.parse(stdin.readLineSync().toString());
  if (num < 0) {
    print("$num is Negative");
  } else if (num > 0) {
    print("$num is Positive");
  } else {
    print("$num is Zero");
  }
}
