// WAP to show difference between Structure and Union.
#include<stdio.h>
struct Employee
{
    /* data */
    int id;
    char name[30];
    int age;
    char address[100];
    float salary;
};
union Person
{
    /* data */
    int id;
    char name[30];
    int age;
    char address[100];
    float salary;
};
int main()
{
    struct Employee emp1;
    union Person person1;
    printf(" The Size of Employee Structure = %d\n", sizeof(emp1));
    printf(" The Size of Person Union = %d\n", sizeof(person1));

    return 0;
}

