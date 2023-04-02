/*Q-18. Write a Program of Addition, Subtraction ,Multiplication and Division using Switch case.(Must Be Menu Driven) */
import 'dart:io';

void main() {
  print('''
--------------------------------------------
              THE CALCULATOR 
--------------------------------------------     
  ''');
  stdout.write("Enter First Number: ");
  var num1 = int.parse(stdin.readLineSync().toString());
  stdout.write("Enter Second Number: ");
  var num2 = int.parse(stdin.readLineSync().toString());

  stdout.write("Enter operation to perform (+,-,*,/): ");
  var op = stdin.readLineSync().toString();

  switch (op) {
    case '+':
      print("$num1 + $num2 = ${num1 + num2}");
      break;

    case '-':
      print("$num1 - $num2 = ${num1 - num2}");
      break;

    case '*':
      print("$num1 * $num2 = ${num1 * num2}");
      break;

    case '/':
      if (num2 == 0) {
        print("Cannot Divide by ZERO");
      }
      print("$num1 / $num2 = ${num1 / num2}");
      break;

    default:
      print("Invalid Operator Entered");
  }
  print('''



//++**--//++**--//++**--//++**--//++**--//
              THANK YOU
//++**--//++**--//++**--//++**--//++**--//
''');
}
