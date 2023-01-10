//  WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
    int a=0, b=1, n, i, s;
    s = a + b;

    printf("Enter the Number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d ,%d, ", a, b);

    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", s);
        a = b;
        b = s;
        s = a + b;
    }

        return 0;
}