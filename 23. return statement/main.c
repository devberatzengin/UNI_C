#include <stdio.h>

int square(int x){
    int result = x*x;
    return result;
};

void main() {
    
    printf("result is %d ",square(2));

}