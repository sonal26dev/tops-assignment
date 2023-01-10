// Looping programs:
// 4. How many odd numbers are there
#include<stdio.h>
int main()
{
    int i, number;
    printf("\n Please Enter the Number: ");
    scanf("%d", &number);

    printf("\n Many odd numbers between 1 and %d are there:\n", number);

    for (i = 1; i <= number; i=i+2)
    {
        printf("%d\t", i);
    }

    return 0;
}