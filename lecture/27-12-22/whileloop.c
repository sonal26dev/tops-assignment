#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of Tables: ");
    scanf("%d", &n);
    int a = 1;
    while (a<11)
    {
        
        printf("%d X %d =%d\n", n, a, n * a);
        a++;
       
    }
        return 0;
}

