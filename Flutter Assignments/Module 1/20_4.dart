/*20_4. Write a program you have to find the factorial of given number. */
import 'dart:io';

void main() {
  stdout.write("Enter a Number: ");
  int num = int.parse(stdin.readLineSync().toString());
  int fact = 1;
  if (num < 0) {
    print("Error! Factorial of a Nagative Number Doesn't exist.");
  } else {
    for (int i = 1; i <= num; i++) {
      fact *= i;
    }
    print("Factorial of $num = $fact");
  }
}
