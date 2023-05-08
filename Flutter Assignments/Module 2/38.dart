/*Q-38. Create a class named 'Rectangle' with two data members 'length' and 'breadth' and two methods to print the area and perimeter of the rectangle respectively. Its constructor having parameters for length and breadth is used to initialize the length and breadth of the rectangle. Let class 'Square' inherit the 'Rectangle' class with its constructor having a parameter for its side (suppose s) calling the constructor of its parent class as 'super (s, s)'. Print the area and perimeter of a rectangle and a square.                                            */
class Rectangle {
  double length;
  double breadth;

  Rectangle(this.length, this.breadth);

  double setArea() {
    return this.length * this.breadth;
  }

  double getPerimeter() {
    return 2 * (this.length + this.breadth);
  }
}

class Square extends Rectangle {
  Square(double side) : super(side, side);
}


void main() {
  Rectangle r = new Rectangle(5, 3);
  print('Area of Rectangle is: ${r.setArea()}');
  print('Perimeter of Rectangle is: ${r.getPerimeter()}');

  Square s = new Square(4);
  print('\nArea of Square is: ${s.setArea()}');
  print('Perimeter of Square is: ${s.getPerimeter()}');
} 