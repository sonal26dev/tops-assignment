// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include<stdio.h>
int main()
{
    int arr[100];
    int size,i,j,s;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size;i++)
    {
        for (j = i + 1; j < size;j++)
        {
            if(arr[i]>arr[j])
            {
                s = arr[i];
                arr[i] = arr[j];
                arr[j] = s;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for (i = 0; i < size;i++)
    {
        printf("%d\t", arr[i]);
    }
        return 0;
}