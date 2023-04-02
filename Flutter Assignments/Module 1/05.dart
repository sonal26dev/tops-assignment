/*Q-5. Write a program to find the Area of Triangle  */
import 'dart:io';

void main() {
  stdout.write("Enter Base of Triangle: ");
  var base = double.parse(stdin.readLineSync().toString());
  

  stdout.write("Enter Height of Triangle: ");
  var height = double.parse(stdin.readLineSync().toString());

  var area = (base * height) / 2;
  print("Area of Triangle = $area");
}


   