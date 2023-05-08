/*Q-43. We have to calculate the percentage of marks obtained in three subjects (each out of 100) by student A and in four subjects (each out of 100) by student B. Create an abstract class 'Marks' with an abstract method 'getPercentage'. It is inherited by two other classes 'A' and 'B' each having a method with the same name which returns the percentage of the students. The constructor of student A takes the marks in three subjects as its parameters and the marks in four subjects as its parameters for student B. Create an object for eac of the two classes and print the percentage of marks for both the students. */
import 'dart:io';

abstract class Marks {
  double getPercentage();
}

class A extends Marks {
  double subject1;
  double subject2;
  double subject3;

  A(this.subject1, this.subject2, this.subject3);

  @override
  double getPercentage() {
    return (subject1 + subject2 + subject3) / 3;
  }
}

class B extends Marks {
  double subject1;
  double subject2;
  double subject3;
  double subject4;

  B(this.subject1, this.subject2, this.subject3, this.subject4);

  @override
  double getPercentage() {
    return (subject1 + subject2 + subject3 + subject4) / 4;
  }
}

void main() {
  var studentA = A(80, 90, 70);
  var studentB = B(80, 90, 70, 60);

  print('Student A Percentage: ${studentA.getPercentage()}');
  print('Student B Percentage: ${studentB.getPercentage()}');
}
