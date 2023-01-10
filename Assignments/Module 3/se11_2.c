// Looping programs:
// 2. WAP to take 10 no.Input from user and find out …C
#include <stdio.h>
int main()
{
    int i, n;
    printf("'Input the 10 Number'\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Number- %d : ", i);
        scanf("%d", &n);
    }

    return 0;
}