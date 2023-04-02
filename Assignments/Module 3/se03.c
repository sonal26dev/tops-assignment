// WAP to find area of circle, rectangle and triangle.//
#include <stdio.h>
int main()
{
   float radius,area;
   printf("\nEnter The radius of Circle:  ");
   scanf("%f",&radius);

    area=3.14*radius*radius;
    printf("Area of Circle:  %f",area);

    printf("\n\nArea of rectangle");
    int length,width;
    printf("\nEnter lenght : ");
    scanf("%d",&length);
    printf("Enter width : ");
    scanf("%d",&width);

    int areaofrec = length * width;
    printf("The Area of Rectangle is :  %d",areaofrec);

    float a,b,c,s,side;
    printf("\n\nEnter The Tree area A,B and C, of The Triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a +b +c)/2;
    side=sqrt((s*(s- a)*(s- b)*(s- c)));
    printf("\nThe Area of The Triangle is : %f. ",side);
     return 0;
}