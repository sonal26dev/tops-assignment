// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int main()
{
    char option,c;
    float a, b, total;
    option:
    printf("---------------------------------\n");
    printf("\tTHE CALCULATOR\n");
    printf("---------------------------------\n");
    printf("\nEnter A value  [+ , -,  *,  /]  B value\n");
    scanf("%f %c %f", &a, &option, &b);

    switch(option)
    
    {
    case '+' /* constant-expression */:
        printf(" %.2f + %.2f = %.2f\n", a, b, a + b);
        total = a + b;
        /* code */
        break;
    case '-':
        printf(" %.2f - %.2f = %.2f\n", a, b, a - b);
        total= a-b;
        break;
    case '*':
        printf(" %.2f * %.2f = %.2f\n", a, b, a * b);
        total = a * b;
        break;
    case '/':
        printf(" %.2f / %.2f = %.2f\n", a, b, a / b);
        total= a / b;
        break;
    default:
        printf("INVALID OPTION");
    }
    printf("\n\n-=--=-=-=-=-=-==-=-==-=-=--=-=-=-=-");
    printf("\n Do you want to continue ? \n\t(Press'y' for yes)\n\t(Press'n'for No)\n");
    scanf("\n\t%c", &c);

    if (c == 'y')
    {
        goto option;
    }
    else if (c == 'n')
        goto exit;
       
    exit:
    printf("\n//++**--//++**--//++**--//++**--//");
    printf("\n\t  THANK YOU\n");
    printf("//++**--//++**--//++**--//++**--//");

    return 0;
}