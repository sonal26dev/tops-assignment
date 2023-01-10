// Looping programs:
// 3. How many Even numbers are there.C
#include<stdio.h>
int main()
{
    int i, number;
    printf("\nPlease Enter the value:  ");
    scanf("%d", &number);

    printf("\nEven Numbers between 1 and %d are there: \n", number);
    
    for (i = 2; i <= number; i=i+2)
    {
        printf("%d\t", i);
    }

        return 0;
}