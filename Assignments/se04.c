//  WAP to find simple interest.
#include<stdio.h>
int main()
{
    int principal,time,interest;
    float rate;

    printf("Enter The value principal: ");
    scanf("%d",&principal);

    printf("Enter The value Rate: ");
    scanf("%f",&rate);

    printf("Enter The value Time: ");
    scanf("%d",&time);

    interest = principal * rate * time /100;
    printf("\'The Simple Interest is %d\'",interest);

    return 0;
}