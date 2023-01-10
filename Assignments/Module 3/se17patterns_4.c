/*Patterns
A
A B
A B C
A B C D
A B C D E*/
#include<stdio.h>
int main()
{

    for (int i = 1; i <= 5;i++)
    {
        for (int  j= 1; j <= i;j++)
        {
            printf("%c ", 'A' + j - 1);

        }
        printf("\n");
    }

        return 0;
}