#include<stdio.h>
int main()
{
    int i,array[10];
    for (i = 0; i < 10; i++)
    {
        printf("enter the value\t");
        scanf("%d", & array[i]);
       
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
        printf("\t");
        
    }

    return 0;
}