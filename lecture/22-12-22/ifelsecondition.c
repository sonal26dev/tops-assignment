#include <stdio.h>
int main()
{
    int guj, hindi, maths, science, eco;
    printf("Enter Marks of guj ");
    scanf("%d", &guj);
    printf("Enter Marks of hindi ");
    scanf("%d", &hindi);
    printf("Enter Marks of maths ");
    scanf("%d", &maths);
    printf("Enter Marks of science ");
    scanf("%d", &science);
    printf("Enter Marks of eco ");
    scanf("%d", &eco);
    int total = guj + hindi + maths + science + eco;
    printf("your total Marks is %d", total);
    float per = ((float)total / 500) * 100;
    printf("\nPercentage is %f", per);
    if (per > 80 && per < 100)
    {
        printf("\nGrade A");
    }
    else if (per > 70 && per <= 80)
    {
        printf("\nGrade B");
    }
    else if (per > 60)
    {
        printf("\nGrade c");
    }
    else if (per > 33)
    {
        printf("\nGrade D");
    }
    else
    {
        printf("youa are fail");
    }
    return 0;
}