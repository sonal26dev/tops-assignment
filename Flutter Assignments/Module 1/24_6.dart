/*24_6.
        *
      * *
    * * *
  * * * *
* * * * *                               */
import 'dart:io';

void main() {
  for (int i = 0; i < 5; i++)
   {
    for (int j = 1 * (5 - i); j >= 0; j--) {
      stdout.write("  ");
    }
    for (int j = 0; j <= i; j++)
     {
      stdout.write("* ");
    }
      stdout.writeln();
  }
}
