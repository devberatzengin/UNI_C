#include <stdio.h>

int main() {
    // %c characters
    // %d integer
    // %s strings
    // %f float
    // %lf double

    // %.1 decimal precision
    // %1 minimum field wight
    // %- left align

    float item1= 5.75;
    float item2= 10.00;
    float item3= 100.99;

    printf("item 1 is :%7.2f dolar\n",item1);
    printf("item 2 is :%-7.2f dolar\n",item2);
    printf("item 3 is :%7.2f dolar\n",item3);

}