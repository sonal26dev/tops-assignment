// WAP to swap two numbers without using third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of A: ");
    scanf(" %d", &a);
    printf("Enater the value of B: ");
    scanf(" %d", &b);

    printf("\nBefore swap A= %d B= %d", a, b);
    a = a + b; // a=30 (10+20)
    b = a - b; // b=10 (30-20)
    a = a - b; // a=20 (30-10)
    printf("\nAfter swap A= %d B= %d", a, b);
    return 0;
}