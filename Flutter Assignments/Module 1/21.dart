/*Q-21. Write a program to find out the max from given number (E.g. No: -1562 Max number is 6) */

void main() {
  List numbers = [8, 1, 0, 2, 102, 5];
  numbers.sort();
  print(numbers); 
  print("Minimum Number is");
  print(numbers.first); 
  print("Maximum Number is");
  print(numbers.last); 
}
