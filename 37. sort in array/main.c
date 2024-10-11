#include <stdio.h>

int main() {
    int array[] = {5,67,4,13,46,974,25,401,50,4,0,15,14,1,2114,7,1,275};
    for (int  i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        for (int  j = 0; j < (sizeof(array)/sizeof(array[0])-1); j++){
            if (array[j]>array[j+1]){
                int temp;
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;}}}
    for (int  i = 0; i < sizeof(array)/sizeof(array[0]); i++){    
        printf("%d \n",array[i]);}
    return 0;
}