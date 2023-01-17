#include <stdio.h>
#include<string.h>
int main()
{
    FILE *student;
    char name[20];
    int age,n;
    int mobile;
    student = fopen("demo.txt", "a");

    printf("Enter the number for Student Details: ");
    scanf("%d", &n);

    for (int i = 0; i < n;i++)
    {
        printf("Enter your name:  ");
        gets(name);

        printf("Enter your Age:  ");
        scanf("%d", &age);

        printf("Enter your Mobile no.:  ");
        scanf("%d", &mobile);
        printf("\n");
    }
    
    for (int i = 0; i < n;i++)
    {
        fprintf(student,"\nMy Name :- %s\nMy Age :- %d\nMy Mobile No. :- %d", name, age, mobile);
    }

    fclose(student);
    return 0;
}