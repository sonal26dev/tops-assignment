// WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
    public:
        int a, b;
        void getdata()
        {
            cout << "Enter the value of A: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
        }
        void answer()
        {
            int addition = a + b;
            int subtraction = a - b;
            int multiplication = a * b;
            float division = (float)a /(float) b;

            cout << "\nThe Calculation are "<< a <<" and "<< b << endl;
            cout << "Addition=  " << addition<< endl;
            cout << "subtraction=  " <<subtraction << endl;
            cout << "Multiplication=  " << multiplication << endl;
            cout << "Division=  " << division << endl;
        }

};
int main()
{
        calculator c1;
        c1.getdata();
        c1.answer();
        return 0;
}