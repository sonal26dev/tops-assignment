/*Q-17. Write Program use switch statement. Display Monday to Sunday */
import 'dart:io';

void main() {
  stdout.write("Enter a Numbar From 1 to 7: ");
  int n = int.parse(stdin.readLineSync().toString());
  switch (n) {
    case 1:
      print("SUNDAY is the 1 day of the week");
      break;
    case 2:
      print("MONDAY is the 2 day of the week");
      break;
    case 3:
      print("TUESDAY is the 3 day of the week");
      break;
    case 4:
      print("WEDNESDAY is the 4 day of the week");
      break;
    case 5:
      print("THUSDAY is the 5 day of the week");
      break;
    case 6:
      print("FRIDAY is the 6 day of the week");
      break;
    case 7:
      print("SATURDAY is the 7 day of the week");
      break;
    default:
      print("Invalid number of day");
  }
}
