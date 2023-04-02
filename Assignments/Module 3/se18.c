// Write a program to find out the max number from given array using function
#include <stdio.h>
int main()
{
    int array[20], i,size,location= 0;

    printf("Enter the number of elements in array\n ");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);

    for (i = 0; i <size; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 1; i <size; i++)
    {
        if (array[i] > array[location])
        {
            location= i;
        }
    }

    printf("Maximum element is present at location %d and its value is  %d.\n",location+1,array[location]);
    return 0;
}