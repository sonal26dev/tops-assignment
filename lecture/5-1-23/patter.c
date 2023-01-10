#include <stdio.h>

int main()
{

    for (int i = 1; i < 6; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("i=%dj=%d   ", i, j);
        }
        printf("\n");
    }
    // for (int i = 5; i > 0; i--)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    return 0;
}
