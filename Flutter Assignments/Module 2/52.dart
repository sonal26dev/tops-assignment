/*Q-52. Create a program using Set        */

void main() {
  var set1 = <int>{1, 2, 3, 4, 5};
  var set2 = <int>{1, 2, 3, 4, 5};
  var unionSet = set1.union(set2);
  print('Union of Set1 and Set2: $unionSet');
}
