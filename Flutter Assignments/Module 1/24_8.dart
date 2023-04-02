/* 24_8.
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5                     */
import 'dart:io';
void main() {
  int Numbers;
  for (int i = 0; i < 5; i++) {
    Numbers = 1;

    for (int j = 1 * (5 - i); j >= 0; j--) {
      stdout.write(" ");
    }
    for (int j = 0; j <= i; j++) {
      stdout.write("$Numbers ");
      Numbers++;
    }
    stdout.writeln();
  }
}
