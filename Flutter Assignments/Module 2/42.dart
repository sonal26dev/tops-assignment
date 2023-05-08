/*Q-42. Create an abstract class 'Bank' with an abstract method 'getBalance'. $100, $150 and $200 are deposited in banks A, B and C respectively. 'BankA', 'BankB' and 'BankC' are subclasses of class 'Bank', each having a method named 'getBalance'. Call this method by creating an object of each of the three classes. */
import 'dart:io';

abstract class Bank {
  void getBalance();
}

class BankA extends Bank {
  int balance = 1000;
  void getBalance() {
    print("BankA balance: \$$balance");
  }
}

class BankB extends Bank {
  int balance = 1500;
  void getBalance() {
    print("BankB balance: \$$balance");
  }
}

class BankC extends Bank {
  int balance = 2000;
  void getBalance() {
    print("BankC balance: \$$balance");
  }
}

void main() {
  var bankA = BankA();
  var bankB = BankB();
  var bankC = BankC();

  bankA.getBalance();
  bankB.getBalance();
  bankC.getBalance();
}



