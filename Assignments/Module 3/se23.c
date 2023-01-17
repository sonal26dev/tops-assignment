//  WAP to make addition, Subtraction and multiplication of two matrix using 2 - D Array
#include<stdio.h>
int main()
{
    int col, row, s, d, arr1[10][10], arr2[10][10], add[10][10], sub[10][10],mul[10][10];

    printf("\nEnter the number of rows and colums of the Array \n\n");
    scanf("%d%d", &col, &row);

    printf("\nEnter the %d elements of the Array1 \n\n", row * col);
    for (s = 0; s < row;s++)
        for (d = 0; d < col;d++)
            scanf("%d",&arr1[s][d]);

    printf("\nEnter the %d elements of the Array2 \n\n", row * col);
    for (s = 0; s < row; s++)
        for (d = 0; d < col; d++)
            scanf("%d", &arr2[s][d]);

    printf("\n\nThe Array1 is: \n\n");
    for (s = 0; s < row; s++)
    {
        for (d = 0; d < col;d++)
        {
            printf("%d\t", arr1[s][d]);
        }
        printf("\n");
    }
    printf("\n\nThe Array2 is: \n\n");
    for (s = 0; s < row; s++)
    {
        for (d = 0; d < col; d++)
        {
            printf("%d\t", arr2[s][d]);
        }
        printf("\n");
    }
    // addition
    for (s = 0; s < row;s++)
        for (d = 0; d < col;d++)
            add[s][d] = arr1[s][d] + arr2[s][d];
    printf("\n\nThe Addition of two entered Array is: \n\n");
    for (s = 0; s < row;s++)
    {
        for (d = 0; d < col;d++)
        {
            printf("%d\t", add[s][d]);
        }
        printf("\n");
    }
    // subtraction
    for (s = 0; s < row;s++)
        for (d = 0; d < col;d++)
            sub[s][d] = arr1[s][d] - arr2[s][d];
    printf("\n\nThe Subtraction of two entered Array is: \n\n");
    for (s = 0; s < row; s++)
    {
        for (d = 0; d < col; d++)
        {
            printf("%d\t", sub[s][d]);
        }
        printf("\n");
    }
    // multiplication
    for (s = 0; s < row; s++)
        for (d = 0; d < col; d++)
            sub[s][d] = arr1[s][d] * arr2[s][d];
    printf("\n\nThe Multiplication of two entered Array is: \n\n");
    for (s = 0; s < row; s++)
    {
        for (d = 0; d < col; d++)
        {
            printf("%d\t", sub[s][d]);
        }
        printf("\n");
    }

     return 0;
}