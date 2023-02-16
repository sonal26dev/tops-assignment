// Write a program to swap the two numbers using friend function withoutusing third variable
#include <iostream>
using namespace std;

class Swap
{
private:
    int a, b;

public:
    // get the data from the user
    void getData()
    {
        cout << "Enter Two Numbers A and B: ";
        cin >> a >> b;
        
    }
    // print the number on the screen
    void display()
    {
        cout << "A = " << a << " B = " << b << endl;
    }
    // friend function
    friend void swap_number(Swap &s);
};

// swap the number
void swap_number(Swap &s)
{
    int temp;
    /* accessing private members from the friend function */
    temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main()
{

    // creating object of class
    Swap s;

    s.getData();
    cout <<endl<< "Before swapping" << endl;
    s.display();

    swap_number(s);
    cout <<endl<< "After swapping" << endl;
    s.display();
    return 0;
}
