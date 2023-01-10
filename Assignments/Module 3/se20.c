// WAP to find reverse of string using recursion
#include <stdio.h>

void reverse(char strg[])
{
    int s, num;
    int tmpy = 0;
    for (num = 0; strg[num] != 0; num++)
        ;
    for (s = 0; s < num / 2; s++)
    {
        tmpy = strg[s];
        strg[s] = strg[num - 1 - s];
        strg[num - 1 - s] = tmpy;
    }
    for (s = 0; s < num; s++)
        putchar(strg[s]);
    printf("\n");
}
int main()
{
    char strg[100];
    printf("please insert the string you wish to get reversed: ");
    gets(strg);
    reverse(strg);

    return 0;
}