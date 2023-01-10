// WAP to make simple calculator(operation include Addition, Subtraction, Multiplication, Division, modulo)
#include <stdio.h>
int main()
{
    char ch;
    int a, b;

    printf("Choose The Operator( +, -, *, /, %% ):  ");
    scanf("%c", &ch);

    printf("\nEnter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    switch (ch)
    {
    case '+' /* constant-expression */:
        printf(" %d + %d = %d\n", a, b, a + b);
        /* code */
        break;
    case '-':
        printf(" %d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf(" %d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        printf(" %d / %d = %f\n", a, b,(float) a /(float) b);
        break;
    case '%':
        printf(" %d %% %d = %d\n", a, b, a % b);
        break;
    default:
        printf("Error! Invalid Operator.");
        break;
    }
    return 0;
}