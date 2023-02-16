// Create menu driven calculator using function.
#include <stdio.h>

int main()
{
    int a, b, choice;
    char fav;

    do
    {
    choice:
        printf("\n=====================================");
        printf("\n     WELCOME TO SIMPLE CALCULATAR");
        printf("\n=====================================");
        printf("\n      :: Choose your choice ::");
        printf("    \n\t1] Addition\n\t2] Substraction\n\t3] Multiplication\n\t4] Division\n\t5] Exit\n");
        printf("\n=====================================");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        printf("-------------------------------------");

        switch (choice)
        {
        case 1:
            printf("\nEnter The First value: ");
            scanf("%d", &a);
            printf("Enter The Second value: ");
            scanf("%d", &b);
            printf("\nThe Addition of %d + %d is = %d \n", a, b, a + b);
            break;

        case 2:
            printf("\nEnter The First value: ");
            scanf("%d", &a);
            printf("Enter The Second value: ");
            scanf("%d", &b);
            printf("\nThe Substraction of %d - %d is = %d \n", a, b, a - b);
            break;

        case 3:
            printf("\nEnter The First value: ");
            scanf("%d", &a);
            printf("Enter The Second value: ");
            scanf("%d", &b);
            printf("\nThe Multiplication of %d X %d is = %d \n", a, b, a * b);
            break;

        case 4:
            printf("\nEnter The First value: ");
            scanf("%d", &a);
            printf("Enter The Second value: ");
            scanf("%d", &b);
            if (b == 0)
            {
                printf("\n Division cannot be zero.\nPlease Enter another Value \n");
            }
            else
            {
                printf("\nThe Division of %d / %d is = %f \n", a, b, (float)a / (float)b);
            }
                break;

            case 5:
                goto sh;
                break;

            default:
                printf("\n\n\tInvalid choice\n");
                printf("Please enter correct choice.");
            }
        printf("\n-------------------------------------\n");
        printf("\n Do you want to continue ? \n\t(Press'y' for yes)\n\t(Press'n'for No)\n");
        scanf("\n\t%c", &fav);

        if (fav == 'y')
        {
            goto choice;
        }
        else if (fav == 'n')
            goto exit;

    } while (fav == 'y');
    exit:
    sh:

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t  :: THANK YOU ::");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    return 0;
    getch();
}