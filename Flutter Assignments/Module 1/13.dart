/*Q-13. Write a program to find the Max number from the given three number using Nested If. */
import 'dart:io';

void main() {
  print("Enter the any 3 Number");
  int num1 = int.parse(stdin.readLineSync().toString());
  int num2 = int.parse(stdin.readLineSync().toString());
  int num3 = int.parse(stdin.readLineSync().toString());

  if (num1 > num2) {
    if (num1 > num3) {
      print("$num1 is the Largest Number.");
    } else {
      print("$num3 is the Largest Number.");
    }
  }else{
    if(num2>num3){
      print("$num2 is the Largest Number.");
    }else{
      print("$num3 is the Largest Number.");
    }
  }
}
