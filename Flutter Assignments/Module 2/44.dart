/*Q-44. Write a program to print the factorial of a number by defining a method named 'Factorial'. Factorial of any number n is represented by n! And is equal to 1*2*3*.*(n-1) *n. E.g. - 4! = 1*2*3*4 = 24 3! = 3*2*1 = 6 2! = 2*1 = 2 Also, 1! = 1 0! = 0           */
void main() {
  print(factorial(4));
  print(factorial(3));
  print(factorial(2));
  print(factorial(1));
  print(factorial(0));
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
