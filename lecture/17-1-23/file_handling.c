#include <stdio.h>
int main()
{
    FILE *fp;
    char sentence[100];
    fp = fopen("demo.txt", "a");
    printf("Enter Sentence: ");
    gets(sentence);
    fprintf(fp, "------%s------", sentence);
    fclose(fp);
    return 0;
}
