// Looping programs:
//  WAP to print table up to given numbers.C
#include<stdio.h>
int main()
{
    int i, number;
    printf("Enter number to print table: ");
    scanf("%d", &number);
    for (i = 1; i <= 10;i++)
    {
        
        {
            printf("%d X %d = %d", number, i, number * i);
            printf("\n");
        }   
    }
        return 0;
}