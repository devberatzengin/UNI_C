#include <stdio.h>

void main() {

    int age;
    printf("\nPlease enter your age: ");
    scanf("%d",&age);

    if (age>=18){
        printf("You can use vote");
    }else if (age<0){
        printf("You are already dont borned");
    }else{
        printf("You can't use vote");
    }
    


}