/* 24_9.
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5                       */
import 'dart:io';

void main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1 * (5 - i); j >= 0; j--) {
      stdout.write(" ");
    }
    for (int k = 1; k <= i; k++) {
      stdout.write(" $i");
    }
    stdout.writeln();
  }
}


