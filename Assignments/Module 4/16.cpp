// Write a program to find the max number from given two numbers usingfriend function
#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int X;
    public:
    void getdata(int i)
    {
        X = i;
    }
    friend void max(A, B);
};
class B
{
    private:
        int Y;
    public:
    void getdata(int i)
    {
        Y = i;
    }
    friend void max(A, B);
};
void max(A a,B b)
{
    if (a.X>=b.Y)
        cout <<"Maximum Number is: "<< a.X << endl;
     else
        cout << "Maximum Number is: " << b.Y << endl;
}
int main()
{
     A a;
     B b;
     a.getdata(20);
     b.getdata(30);
     max(a, b);
     return 0;
}