// Write a program of Addition, Subtraction, Division, Multiplication using constructor
#include <iostream>

using namespace std;
class calculation
{
public:
    int a, b;
    calculation()
    {
        a = 0;
        b = 0;
    }
    void getdata()
    {
        cout << "Enter value of A: ";
        cin >> a;
        cout << "Enter value of b: ";
        cin >> b;
    }
    void answer()
    {
        int addition = a + b;
        cout << "Addition= " << addition<<endl;

        int Subtraction= a - b;
        cout << "Subtraction= " << Subtraction<<endl;

        int Multiplication = a * b;
        cout << "Multiplication= " << Multiplication<<endl;

        float Division = (float)a / (float)b;
        cout << "Division= " << Division<<endl;
    }

    
};
int main()
{
    calculation c1;
    //c1.getdata();
    c1.answer();

    return 0;
}