/*Q-45. We have to calculate the area of a rectangle, a square and a circle. Create an abstract class 'Shape' with three abstract methods namely 'RectangleArea' taking two parameters, 'SquareArea' and 'CircleArea' taking one parameter each. The parameters of 'RectangleArea' are its length and breadth, that of 'SquareArea' is its side and that of 'CircleArea' is its radius. Now create another class 'Area' containing all the three methods 'RectangleArea', 'SquareArea' and 'CircleArea' for printing the area of rectangle, square and circle respectively. Create an object of class 'Area' and call all the three methods. */
abstract class Shape {
  double RectangleArea(double length, double breadth);
  double SquareArea(double side);
  double CircleArea(double radius);
}

class Area implements Shape {
  @override
  double RectangleArea(double length, double breadth) {
    return length * breadth;
  }

  @override
  double SquareArea(double side) {
    return side * side;
  }

  @override
  double CircleArea(double radius) {
    return 3.14 * radius * radius;
  }
}

void main() {
  Area area = new Area();
  print("Rectangle area is ${area.RectangleArea(5, 6)}");
  print("Square area is ${area.SquareArea(5)}");
  print("Circle area is ${area.CircleArea(5)}");
}
