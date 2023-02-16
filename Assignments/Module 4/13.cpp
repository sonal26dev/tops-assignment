// Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <string.h>
using namespace std;
class Addstring
{
public:
    char s1[30], s2[30];
    Addstring(char str1[], char str2[])
    {
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }

    void operator+()
    {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};
int main()
{
    char str1[] = "ishi  ";
    char str2[] = "sonal";
    Addstring a1(str1, str2);
    +a1;
    return 0;
}