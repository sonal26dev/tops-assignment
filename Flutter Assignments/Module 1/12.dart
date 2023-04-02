/*Q-12. Write a Program to check the given number is prime or not prime. */
import 'dart:io';

void main() {
  stdout.write("Enter a Number: ");
  int num = int.parse(stdin.readLineSync().toString());

  bool flag = false;
  for (int i = 2; i <= num ~/ 2; ++i) {
    if (num % i == 0) {
      flag = true;
      break;
    }
  }
  if (!flag)
    print("$num is a Prime Number.");
  else
    print("$num is Not a Prime Number.");
}
