#include <stdio.h>
int main()
{
    char name;
    int age;
    float parcentage;

    printf("Enter your name:  ");
    scanf("%c",&name);

    printf("Enter your Age:  ");
    scanf("%d",&age);

    printf("Enter your parcentage:  ");
    scanf("%f",&parcentage);

    printf("My Name = %c\nMy Age = %d\nMy Parcentage = %f",name,age,parcentage);
    return 0;


}