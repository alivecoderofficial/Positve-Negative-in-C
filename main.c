// Write a program to check whether the number is positive or negative

#include <stdio.h> //header file

int main()
{
    int input_number; // variable
    printf("Enter the number: ");
    scanf("%d", &input_number);

    // Logical part
    // Positive number -> >0
    // Negative number -> <0
    if (input_number > 0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is negative");
    }

    return 0;
}
