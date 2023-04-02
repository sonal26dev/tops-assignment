/*20_5.Write a program you have to print the Fibonacci series up to user given number */
import 'dart:io';

void main() {
  stdout.write("Enter the Number:  ");
  int n = int.parse(stdin.readLineSync().toString());
  for (int i = 0; i < n; i++) {
    print(fibonacci(i));
  }
}

int fibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}
