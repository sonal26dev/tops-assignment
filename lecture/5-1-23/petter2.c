#include<stdio.h>
int main()
{
    int r, c;
    printf("Enter Number of Row: ");
    scanf("%d", &r);
    printf("Enter Number of Column: ");
    scanf("%d", &c);
    for (int i = 1; i < r;i++)
    {
        for (int j = 1; j < c;j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
        return 0;
}