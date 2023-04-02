/*Q-22. Write a program make a summation of given number(E.g. 1523 ans :-11) */

void main() {
  List<int> numbers = [1, 2, 3, 4, 5];

  int sum = 0;
  print(numbers);

  for (int i = 0; i < numbers.length; i++) {
    sum += numbers[i];
  }

  print("The sum of given numbers is: $sum");
}
