// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include<stdio.h>
int main()
{
    int number, first, last, sum = 0;
   
    printf("\nPlease Enter any Number that you wish:  ");
    scanf("%d", &number);

    first = number;
    while(first>=10)
    {
        first = first / 10;
    }
    last = number % 10;
    sum = first + last;

    printf("\nThe Sum of First Digit (%d) & Last Digit (%d) of %d= %d", first, last, number,sum);

    return 0;
}