// Looping programs:
// 5. Sum of even numbers
#include<stdio.h>
int main()
{
    int i, number, sum=0;
    printf("\nEnter the value: ");
    scanf("%d", &number);

    printf("\nEven Numbers between 1 and %d are there: \n", number);
    for (i = 2; i <= number;  i=i+2)
    {
        printf("%d\t", i);
        sum =sum+ i;
    }
    printf("\n\nThe sum of all Even Numbers between 1 and %d = %d", number,sum);

    return 0;
}