// Looping programs:
// 6. Sum of odd numbers.C
#include <stdio.h>
int main()
{
    int i, number,sum=0;
    printf("\nPlease Enter the value:  ");
    scanf("%d", &number);

    printf("\nodd Numbers between 1 and %d are there: \n", number);
    for (i = 1; i <= number; i = i + 2)
    {
        printf("%d\t", i);
        sum = sum + i;

    }
    printf("\n\nThe sum of all Odd Numbers between 1 and %d = %d", number, sum);

    return 0;
}