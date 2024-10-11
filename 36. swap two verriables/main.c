#include <stdio.h>
#include <string.h>

int main()
{

    char x = 'X';
    char y = 'Y';
    printf("x: %c\n", x);
    printf("y: %c\n", y);
    char temp;
    temp = x;
    x = y;
    y = temp;
    printf("x: %c\n", x);
    printf("y: %c\n", y);

    char text0[] = "Lemonate";
    char text1[] = "CocaCola";
    char temp0[25];

    printf("text0: %s\n", text0);
    printf("text1: %s\n", text1);

    strcpy(temp0, text0);
    strcpy(text0, text1);
    strcpy(text1, temp0);

    printf("text0: %s\n", text0);
    printf("text1: %s\n", text1);

    return 0;
}