// WAP to convert years into days and days into years.
#include <stdio.h>
int main()
{
    int d, y, m, w;
    // d = days
    // y = years
    // m = month
    // w = week

    printf("Enter the Year: ");
    scanf("%d", &y);

    // y = (d / 365);
    d = y * 365;

    printf(" %d day\n", d);

    printf("\nEnter the Day: ");
    scanf("%d", &d);

    y = (d / 365);
    m = (d / 30);
    // w = (d % 365)/ 7;
    // d = d -((y*365)*(w*7));

    printf(" %d year\n %d Month ", y, m);

    return 0;
}