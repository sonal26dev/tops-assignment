// WAP Find out length of string without using inbuilt function
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the sting\n");
    gets(str);

    int length = 0;
    for (int i = 0; str[i] != '\0';i++)
    {
        length++;
    }
    printf("You Enter String Length is(%s): %d\n",str, length);

    return 0;
}