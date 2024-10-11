#include <stdio.h>

int main() {

    int x;      //declaration
    x=10;       //initialization
    int y=123;  //declaration + initialization

    int age =19;        //integer
    float gpa =3.20;    //floating point number
    char grade= 'C';    //single character
    char name[] = "Bro";

    printf("You are %d years old\n",age); // %d is mean decimal number  
    printf("%s's gpa is %.2f and its %c",name,gpa,grade);

    return 0;
}