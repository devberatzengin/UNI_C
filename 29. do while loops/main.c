#include <stdio.h>

int main (){

    int num=0,sum=0;

    do
    {
        printf("Enter a # above 0\n ");
        scanf("%d",&num);
        if (num >0)
        {
            sum += num;
        }
        
    } while (num>0);

    printf("%d",sum);

    return 0;    

}