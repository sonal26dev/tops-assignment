// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include<stdio.h>
int main()
{
    int number[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5;i++)
    {
        scanf("%d", &number[i]);
    }
    printf("Display Number: ");
    for (int i = 0; i < 5;i++)
    {
        printf("%d\n", number[i]);
    }
        return 0;
}