#include <stdio.h>
int findmax(int x,int y){
    return (x>y) ? x : y;
}



void main(){

    int max=findmax(3,5);
    printf("max valuse is %d",max);

}