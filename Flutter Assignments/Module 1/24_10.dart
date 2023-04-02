/* 24_10.   
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15                   */
import 'dart:io';

void main() {
  int Numbers = 1;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= i; j++) {
      stdout.write(" $Numbers");
      Numbers++;
    }
    stdout.writeln();
  }
}

