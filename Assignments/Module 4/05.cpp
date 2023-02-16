/*Define a class to represent a bank account. Include the following members:
    1. Data Member:
    -Name of the depositor
    -Account Number
    -Type of Account
    -Balance amount in the account
    2. Member Functions
    -To assign values
    -To deposited an amount
    -To withdraw an amount after checking balance
    -To display name and balance                                    */
#include <iostream>
using namespace std;
class BankAccount
{
public:
    string depositer;
    string accono;
    char ch;
    float balance;

public:
    void initial();
    void deposit();
    void show();
    void withdraw();
};
void BankAccount::initial()
{
    cout << "Enter The name of Depositor: ";
    getline(cin, depositer);
    cout << "Enter Account Number: ";
    cin >> accono;
    cout << "Enter type of Account 'S' for Saving account type and 'C' for Current account: " ;
    cin >> ch;
    cout <<endl<< "    !!!!CONGRATULATIONS ACCOUNT CREATED!!!!"<<endl;
    cout << "Initial Account Balance = 0.0 " << endl;
    balance = 0.0;
    BankAccount::show();
}
void BankAccount::show()
{
    cout << "Name Of Depositor= " << depositer << endl;
    cout << "Account Number= " << accono << endl;
    cout << "Account Type= ";
    if (ch == 'S' || ch == 's')
        cout << "SAVING" << endl;
    else if (ch == 'C' || ch == 'c')
        cout << "CURRENT" << endl;
    else
        cout << "BAD INPUT" << endl;
    cout << "Balance= " << balance << endl;
}
void BankAccount::deposit()
{
    int added;
    cout << "Enter Amount to be Deposited:  ";
    cin >> added;
    balance = balance + added;
    BankAccount::show();
}
void BankAccount::withdraw()
{

    int subtracted;
    cout << "Enter Amount to be Withdrawn:  ";
    cin >> subtracted;
    balance = balance - subtracted;
    BankAccount::show();
}
int main()
{
    BankAccount obj;
    cout << "\t\t\t\t::Enter Initial Bank Account Details::" << endl;
    cout << "------------------------------------------------------------------------------------------"<<endl;

    obj.initial();
    cout << "    Deposit Amount" << endl;
    obj.deposit();
    cout << "    Withdraw Amount" << endl;
    obj.withdraw();
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout <<endl<< "\t\t\t\t\tTHANK YOU" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;
    return 0;
}
