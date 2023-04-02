/*24_2.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5      */
import 'dart:io';

void main() {
  
  for (int i = 0; i < 5; i++) {
  
    for (int j = 1; j <= i+1; j++) {
      stdout.write(" $j");
  
    }
    stdout.writeln();
  }
}
