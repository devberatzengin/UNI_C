#include <stdio.h>
#include <string.h>
void main(){

    char name[25];
    int age;

    printf("Hi please enter your name => ");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';

    printf("Hi %s how old are u => ",name);
    scanf("%d",&age);
    printf("\nHello %s u are %d years old\n",name,age);

    
 
    
}