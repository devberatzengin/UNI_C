#include <stdio.h>

void main()
{

    char Grade;
    printf("\nPlease enter your grade: ");
    scanf(" %c", &Grade);

    switch (Grade){
    case 'A':
        printf("Perfect!");
        break;
    case 'B':
        printf("You good :) ");
        break;
    case 'C':
        printf("Not bad :/ ");
        break;
    case 'D':
        printf("You have to study ");
        break;
    case 'F':
        printf("You failed");
        break;
    default:
        printf("Please enter a regular grade!!");
    }

}