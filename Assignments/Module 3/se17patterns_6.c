/*Patterns
* 
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * 
* * * *
* * *
* *
*         */
#include<stdio.h>
int main()
{
    int m = 6;
    for (int i = 1; i <= m;i++)
    {
        for (int j = 0; j <i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for (int i = 1; i <=m-1;i++)
    {
        for (int j = 0; j < m - i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
        return 0;
}