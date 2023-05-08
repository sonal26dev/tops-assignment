/*Q-35. Create a class with a method that prints "This is a parent class" and its subclass with another method that prints "This is child class". Now, create an object for each of the class and call 1 - method of parent class by object of parent class 2 - method of child class by object of child class 3 - method of parent class by object of child class*/
class parentClass {
  void printParent() {
    print("This is a Parent Class");
  }
}

class ChildClass extends parentClass {
  void printChild() {
    print("Thi is Child Class");
  }
}

void main() {
  var parent = parentClass();
  var child = ChildClass();
  //1 - method of parent class by object of parent class
  parent.printParent();
  //2 - method of child class by object of child class
  child.printChild();
  //3 - method of parent class by object of child class
  child.printParent();
}
