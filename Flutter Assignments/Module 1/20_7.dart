/*20_7.Write a program to print the number in reverse order. */

void main() {
  var mylist = [5, 4, 3, 2, 1];

  print(mylist);
  var reversedlist = new List.from(mylist.reversed);
  print(" Reverse List");
  print(reversedlist);
}
