/* 24_7.
    *
   * *
  * * *
 * * * *
* * * * *                            */
import 'dart:io';

void main() {
  for (int i = 0; i < 5; i++) {
    for (int j =  (5 - i); j >1; j--) {
      stdout.write(" ");
    }
    for (int j = 0; j <= i; j++) {
      stdout.write("* ");
    }
    stdout.writeln();
  }
}
