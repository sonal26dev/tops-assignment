// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>


int main()
{
    int number, reverse_number = 0;
    printf("Enter a number to reverse value: "); // allow user to enter a number
    scanf("%d", &number);                       // takes value from user
    while (number != 0)
    {
        reverse_number = reverse_number * 10;
        reverse_number = reverse_number + number % 10;
        number = number / 10;
    }
    printf("Reverse of entered number is: %d", reverse_number); // print reverse value
    return 0;
}