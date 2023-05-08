/*Q-33. Create a class to print an integer and a character with two methods having the same name but different sequence of the integer and the character parameters. For example, if the parameters of the first method are of the form (int n, char c), then that of the second method will be of the form (char c, int n). */
class Myclass {
  void printIntChar(var n, var c) {
    print("$n $c");
  }

  void printCharInt(var c, var n) {
    print("$c $n");
  }
}

void main() {
  Myclass myclass = Myclass();
  myclass.printIntChar(1, "ishi");
  myclass.printCharInt("sonal", 2);
}
