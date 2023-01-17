#include<stdio.h>
struct employees
{
    int id;
    char name[30];
    int age;
    char address[100];
    int salary;
};
int main()
{
    int n;
    printf("Enter the employees no: ");
    scanf("%d", &n);
    struct employees s[n];

    for (int i = 0; i < n; i++)
    {    
        printf("\nEnter employees id: ");
        scanf("%d",&s[i].id);
        printf("Enter employees name: ");
        scanf("%s",s[i].name);
        printf("Enter employees age: ");
        scanf("%d", &s[i].age);
        printf("Enter employees address: ");
        scanf("%s", s[i].address);
        printf("Enter employees salary: ");
        scanf("%d", &s[i].salary);
        printf("\n");
    }
    
    printf("\n\t\t\t\tEMPLOYEES DETAIL");
    printf("\n===============================================================================\n");
    printf("\nEmployees Id |Employees Name |Employees Age| Employees Address|Employees Salary");
    printf("\n-------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        
        printf("\n   %d  \t|\t%s\t|\t%d\t|\t%s\t|\t%d\t", s[i].id, s[i].name, s[i].age, s[i].address, s[i].salary);
        printf("\n-------------------------------------------------------------------------------\n");

        // printf("\nEnter employees id:%d ", s[i].id);
        // printf("\nEnter employees name:%s ",s[i].name);
        // printf("\nEnter employees age:%d ",s[i].age);
        // printf("\nEnter employees address:%s ",s[i].address);
        // printf("\nEnter employees salary:%d ",s[i].salary);
    }
    printf("\n===============================================================================\n");
    return 0;
}