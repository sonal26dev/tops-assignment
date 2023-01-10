// Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main()
{
    int a, b,num,sum = 0;
    printf("Enter a Number to add digits: ");
    scanf("%d", &a);
    num = a;

    while(a>0)
    {
        b = a % 10;
        sum = sum + b;
        a = a / 10;

    }
    printf("\nSum of digits is %d= %d", num, sum);
    
    return 0;
}