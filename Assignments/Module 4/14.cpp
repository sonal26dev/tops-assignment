/* Write a program to calculate the area of circle, rectangle and triangle usingFunction Overloading
 Rectangle : Area *breadth
 Triangle : ½ *Area *breadth
 Circle : Pi *Area *Area */
#include <iostream>
using namespace std;
int area(int l, int b)
{
    int ar;
    ar = l * b;
    return ar;
}
float area(float bs, float ht)
{
    float ar;
    ar = ((bs * ht) / 2);
    return ar;
}
float area(float r)
{
    float ar;
    ar = 3.14 * r * r;
    return ar;
}

int main()
{
    int l, b;
    float bs, ht, r;
    float result;

    cout << "\nEnter the Length & Bredth of Rectangle: ";
    cin >> l >> b;
    result = area(l, b);
    cout << "\nArea of Rectangle = " << result << endl;

    cout << "\nEnter the Base & Hieght of Triangle: ";
    cin >> bs >> ht;
    result = area(bs, ht);
    cout << "\nArea of Triangle = " << result << endl;

    cout << "\nEnter the Radius of Circle: ";
    cin >> r;
    result = area(r);
    cout << "\nArea of Circle = " << result << endl;

    return 0;
}
