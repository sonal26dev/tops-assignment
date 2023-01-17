// Write a program of structure for five employee that provides the followinginformation - print and display empno, empname, address and age
#include<stdio.h>
#include<string.h>
struct employees
{
    /* data */
    int no;
    char name[30];
    char address[100];
    int age;
};
int main()
{
    int n;
    printf("Enter the number of store employees Detail: ");
    scanf("%d", &n);
    printf("\nEnter %d Employees Detail\n\n",n);
    struct employees s[n];

    for (int i = 0; i < n;i++)
    {
        printf("Enter Employee no.: ");
        scanf("%d",&s[i].no);
        printf("Enter Employee Name: ");
        scanf("%s",s[i].name);
        printf("Enter Employee Address: ");
        scanf("%s",s[i].address);
        printf("Enter Employee Age: ");
        scanf("%d", &s[i].age);
        printf("\n");
    }
    printf("\n\t\t\t\tEMPLOYEES DETAIL");
    printf("\n===============================================================================\n");
    for (int i = 0; i < n; i++)
    {

        printf("\nEmployee no.    : %d ", s[i].no);
        printf("\nEmployee name   : %s ",s[i].name);
        printf("\nEmployee address: %s ",s[i].address);
        printf("\nEmployee age    : %d ", s[i].age);
        printf("\n-------------------------------------------------------------------------------\n");
    }
    printf("\n===============================================================================\n");
    return 0;
}
