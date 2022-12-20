/* Write a program to make simple calculator
( to make addition,subtraction,multiplication,division and modulo)
*/

#include <stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Enter The Value of A: ");
    scanf("%d",&a);
    printf("Enter The Value of B: ");
    scanf("%d",&b);

    printf("\nAddition of A and B");
    printf(" = %d ",a+b);

    printf("\nSubtraction of A and B");
    printf(" = %d",a-b);

    printf("\nMultiplication of A and B");
    printf(" = %d",a*b);

    printf("\nDivision of A and  B");
    printf(" = %f",(float)a/(float)b);

    printf("\nModulo of A and B");
    printf(" = %d",a%b);

    return 0;

}