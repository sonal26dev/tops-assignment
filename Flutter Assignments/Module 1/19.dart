/*Q-19. Write a program of to find out the Area of Triangle, Rectangle and Circle using If  Condition.(Must Be Menu Driven)*/
import 'dart:io';

void main() {
  var area;
  print('''
------------------------
   1. Triangle
   2. Rectangle
   3. Circle
------------------------''');
  stdout.write("Enter your Choice: ");
  int choice = int.parse(stdin.readLineSync().toString());

  switch (choice) {
    case 1:
      stdout.write("Enter Base: ");
      double base = double.parse(stdin.readLineSync().toString());
      stdout.write("Enter Height: ");
      double height = double.parse(stdin.readLineSync().toString());
      area = 0.5 * base * height;
      break;
    case 2:
      stdout.write("Enter Length: ");
      double length = double.parse(stdin.readLineSync().toString());
      stdout.write("Enter Width: ");
      double width = double.parse(stdin.readLineSync().toString());
      area = length * width;
      break;
    case 3:
      stdout.write("Enter Radius: ");
      double radius = double.parse(stdin.readLineSync().toString());
      area = 3.14 * radius * radius;
      break;
    default:
      print("Invalid Choice!!!");
  }
  print("'Area'=  $area");
}
