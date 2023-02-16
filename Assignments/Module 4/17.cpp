// Write a program of to swap the two values using templates
#include <iostream>
using namespace std;
template <class T>
void swap_numbers(T &A, T &B)
{
    T temp=A;
    A=B;
    B = temp;
    
}

// Driver code
int main()
{
    int i1 = 4, i2 = 7;
    float f1 = 5.4, f2 = 9.3;
    char c1 = 'S', c2 = 'D';

    cout << "Before passing data to Function template: ";
    cout << "\nA= " << i1 << "\tB= " << i2;
    cout << "\nA= " << f1 << "\tB= " << f2;
    cout << "\nA= " <<c1 << "\tB= " << c2;

    swap_numbers(i1, i2);
    swap_numbers(f1, f2);
    swap_numbers(c1, c2);

    cout << "\n\nAfter Passing data to Function Template: ";
    cout << "\nA= " << i1 << "\tB= " << i2;
    cout << "\nA= " << f1 << "\tB= " << f2;
    cout << "\nA= " << c1 << "\tB= " << c2;
    return 0;
}
