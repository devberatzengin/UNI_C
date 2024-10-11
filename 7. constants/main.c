#include <stdio.h>

int main() {
    const float pi =3.14;
    printf("%6.2f",pi);
    pi =5.67;   //pi cant cahangeable because const
    printf("%6.2f",pi);

}
