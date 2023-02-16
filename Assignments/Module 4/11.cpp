//  Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division Of two number using different parameters andFunction Overloading
#include<iostream>
using namespace std;
class Mathematice_Calculation
{
    public:
    Mathematice_Calculation()
    {
        int a, b, c;
        cout << "Enter the value of A: ";
        cin >> a;
        cout << "Enter The Value of B: ";
        cin >> b;
        c = a + b;
        cout << "Addition of A and B is = " << c<<endl<<endl;
    }
    Mathematice_Calculation(int a)
    {
        int b,c;
        c = a - b;
        cout << "Subtraction of A and B is = " << c<<endl<<endl;
    }
    Mathematice_Calculation(int a,int b)
    {
        int c;
        c = a * b;
        cout << "Multiplication of A and B is = " << c << endl
             << endl;
    }
    Mathematice_Calculation(float a,float b,float d)
    {
        float c;
        c = a / b;
        cout << "Division of A and B is = " << c << endl
             << endl;
    }

};
int main()
{
    Mathematice_Calculation();
    Mathematice_Calculation(10);
    Mathematice_Calculation(10,20 );
    Mathematice_Calculation(10,20,30);
    return 0;
}