/* 1 2 3 4 5 
   6 7 8 9 10
   11 12 13 14 15
   16 17 18 19 20
   21 22 23 24 25
*/
#include<stdio.h>
int main()
{
    int r, c,p=1;
    printf("Enter Number of Row: ");
    scanf("%d", &r);
    printf("Enter Number of Column: ");
    scanf("%d",&c);

    for (int i = 0; i < r;i++)
    {
        for (int j = 0; j < c;j++)
        {
            printf("%d ", p);
            p++;
        }
        printf("\n");
    }

        return 0;                      
}