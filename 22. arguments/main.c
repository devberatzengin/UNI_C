#include <stdio.h>

void wellcome(char name[],int age){
    printf("\nHello mr %s",name);
    printf("\nYou are %d years old",age);
}


int  main() {

    char name[]="berat";
    int age=18;
    wellcome(name,age);

    return 0;
}