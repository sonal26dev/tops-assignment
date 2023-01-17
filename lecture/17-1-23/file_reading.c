#include <stdio.h>
int main()
{
    FILE *fp;
    char sentence[100];
    fp = fopen("demo.txt", "r");
    // printf("Enter Sentence: ");
    // gets(sentence);
    // fprintf(fp,"------%s------",sentence);
    char ch;
    do
    {
        ch = getc(fp);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(fp);
    return 0;
}
