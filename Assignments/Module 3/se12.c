//  WAP to print factorial of given number C.
#include <stdio.h>
int main()
{
    int number, i, f=1;
    printf("Enter a Number to calculate its Factorial: ");
    scanf("%d", &number);

    if(number<0)
        printf("Error! Factorial of a Nagative number doesn't exist. ");
    else
    {
        for (i = 1; i <= number; ++i)
        {
            f = f * i;
        }
        printf("Factorial of %d = %d", number, f);
    }
    return 0;
}
