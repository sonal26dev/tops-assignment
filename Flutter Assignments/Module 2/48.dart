/*Q-48. All the banks operating in India are controlled by RBI. RBI has set a well-defined guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all banks must follow. For example, suppose RBI has set minimum interest rate applicable to a saving bank account to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it. Write a DART program to implement bank functionality in the above scenario and demonstrate the dynamic polymorphism concept. Note: Create few classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc). Assume and implement required member variables and functions in each class               */
class RBI {
  double minInterestRate;
  double minBalanceAllowed;
  double maxWithdrawalLimit;

  RBI(this.minInterestRate, this.minBalanceAllowed, this.maxWithdrawalLimit);
}

class Account {
  String accountNumber;
  String accountHolderName;
  double balance;

  Account(this.accountNumber, this.accountHolderName, this.balance);

  void deposit(double amount) {
    balance += amount;
    print('Amount deposited: \$$amount');
  }

  void withdraw(double amount) {
    if (balance - amount < 0) {
      print('Insufficient balance');
      return;
    }
    balance -= amount;
    print('Amount withdrawn: \$$amount');
  }

  void display() {
    print('Account Number: $accountNumber');
    print('Account Holder Name: $accountHolderName');
    print('Balance: \$$balance');
  }
}

class Customer {
  String name;
  String address;
  String phoneNumber;

  Customer(this.name, this.address, this.phoneNumber);
}

class SBI extends RBI {
  SBI() : super(4.0, 1000.0, 50000.0);
}

class ICICI extends RBI {
  ICICI() : super(4.5, 5000.0, 100000.0);
}

class PNB extends RBI {
  PNB() : super(3.5, 500.0, 20000.0);
}

void main() {
  Account account = new Account('123456789', 'John Doe', 10000.0);

  SBI sbi = new SBI();

  ICICI icici = new ICICI();

  PNB pnb = new PNB();

  List<RBI> banks = [sbi, icici, pnb];

  for (RBI bank in banks) {
    print('Bank Name: ${bank.runtimeType}');
    print('Minimum Interest Rate: ${bank.minInterestRate}%');
    print('Minimum Balance Allowed: \${bank.minBalanceAllowed}');
    print('Maximum Withdrawal Limit: \${bank.maxWithdrawalLimit}');
    print('');

    account.deposit(10000.0);

    account.withdraw(5000.0);

    account.display();

    print('');

    account = new Account('123456789', 'dev', 10000.0);

    print('');
  }
}
