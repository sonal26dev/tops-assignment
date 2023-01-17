#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int age;
    char address[50];
    float percentage;
};

int main()
{
    // union student s1;
    // printf("%d", sizeof(s1));
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter rollno,name,age,address,percentage: ");
        scanf("%d %s %d %s %f", &s[i].rollno, s[i].name, &s[i].age, s[i].address, &s[i].percentage);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("data is roll=%d name=%s age=%d address=%s per=%f", s[i].rollno, s[i].name, s[i].age, s[i].address, s[i].percentage);
    }

    return 0;
}
/*
struct student{
    int rollno;
    char name[20];
    int age;
    char address[50];
    float percentage;
}
int

int a;
a=50;

struct student s1,s2,s3;
s1.rollno=50;
s2.rollno=40;


*/