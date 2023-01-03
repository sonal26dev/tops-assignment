#include <stdio.h>
int main()
{
    int a;

    do
    {
        printf("Enter number: ");
        scanf("%d", &a);
    } while (a != 11);

    return 0;
}