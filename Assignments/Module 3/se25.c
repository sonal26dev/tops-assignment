// WAP to reverse a string and check that the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], revstr[100];
    int i, j, len, flag;
    flag = 0;

    printf("\nEnter any Text: ");
    gets(str);

    len = strlen(str);
    j = 0;
    for (i = len - 1; i >= 0;i--)
    {
        revstr[j++] = str[i];
    }
    revstr[i] = '\0';
    for (i = 0; i < len;i++)
    {
        if(str[i]!=revstr[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n %s is a Palindrome string", str);
    }
    else
    {
        printf("\n%s is not Palindrome string", str);
    
    }

        return 0;
}