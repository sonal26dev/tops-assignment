/*Q-40. Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate methods for each operation whose real and imaginary parts are entered by user.*/

class Complex {
  var real;
  var imaginary;

  Complex(double real, double imaginary) {
    this.real = real;
    this.imaginary = imaginary;
  }

  Complex add(Complex other) {
    return Complex(real + other.real, imaginary + other.imaginary);
  }

  Complex subtract(Complex other) {
    return Complex(real - other.real, imaginary - other.imaginary);
  }

  Complex multiply(Complex other) {
    return Complex(real * other.real - imaginary * other.imaginary,
        real * other.imaginary + imaginary * other.real);
  }
}

void main() {
  var c1 = Complex(2, 3);
  var c2 = Complex(4, 5);

  print('\nSum of $c1 and $c2 is ${c1.add(c2)}');
  print('\nDifference of $c1 and $c2 is ${c1.subtract(c2)}');
  print('\nProduct of $c1 and $c2 is ${c1.multiply(c2)}');
}
