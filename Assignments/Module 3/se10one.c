/* WAP to show
1. Monday to Sunday using switch case
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number from 1 to 7:  ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("SUNDAY is the 1 day of the week");
        break;
    case 2:
        printf("MONDAY is the 2 day of the week");
        break;
    case 3:
        printf("TUESDAY is the 3 day of the week");
        break;
    case 4:
        printf("WEDNESDAY is the 4 day of week");
        break;
    case 5:
        printf("THUSDAY is the 5 day of week");
        break;
    case 6:
        printf("FRIDAY is the 6 day of week");
        break;
    case 7:
        printf("SATURDAY is the 7 day of week");
        break;
    default:
        printf("\n you have entered a WRONG NUMBER");
    }
    return 0;
}