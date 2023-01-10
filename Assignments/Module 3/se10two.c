// WAP to show
// 2. Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
    char s;
    printf("Please Enter any Singlr Character:  ");
    scanf("%c", &s);

    switch(s)
    {
        case 'a':
            printf(" a is Vowel");
            break;
        case 'e':
            printf(" e is Vowel");
            break;
        case 'i':
            printf(" i is Vowel");
            break;
        case 'o':
            printf(" o is Vowel");
            break;
        case 'u':
            printf(" u is Vowel");
            break;

        case 'A':
            printf(" A is VOWEL");
            break;
        case 'E':
            printf(" E is VOWEL");
            break;
        case 'I':
            printf(" I is VOWEL");
            break;
        case 'O':
            printf(" O is VOWEL");
            break;
        case 'U':
            printf(" U is VOWEL");
            break;

        default:
            printf("its CONSONANT");
            break;
    }

    return 0;
}