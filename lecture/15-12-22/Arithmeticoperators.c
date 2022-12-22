#include <stdio.h>
int main()
{
    int a,b;
    float c;

    printf("Enter the value of A: ");
    scanf("%d", &a);

    printf("\nEnter the value of B: ");
    scanf("%d", &b);

    printf("\nAddition of A and B");
    printf("  =%d",a+b);

    printf("\nSubtraction of A and B");
    printf("  =%d",a-b);

    printf("\nMultiplication of A and B");
    printf("  =%d",a*b);

    printf("\nDivision of A and B");
    printf(" =%f",(float)a/(float)b);


    return 0;
}
