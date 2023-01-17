//  WAP to find factorial using recursion
#include<stdio.h>
int factorial(int number)
{
    int i,f=1;
    if(number<0)
        printf("Error! Factorial of a Nagative number doesn't exist. ");
    else
    {
        for (i = 1; i <= number;++i)
        {
            f = f * i;
        }
    }
    return f;
}
int main()
{
    int number;
    printf("Enter a Number to calculate its Factorial: ");
    scanf("%d", &number);
    int f = factorial(number);
    printf("Factorial of %d = %d", number, f);

    return 0;
}