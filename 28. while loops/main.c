#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    char name[25];
    printf("\n What's your name");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';
    while (strlen(name)==0)
    {
        printf("\nYou did't enter your name");
        printf("\n What's your name");
        fgets(name,25,stdin);
        name[strlen(name)-1]='\0';
    }
    printf("Hello %s",name);
}
