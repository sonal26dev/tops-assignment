#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of Tables: ");
    scanf("%d", &n);
    for (i = 1; i < 11; i++)
    {
        printf("%d X %d =%d\n", n, i, n * i);
    }
    return 0;
}