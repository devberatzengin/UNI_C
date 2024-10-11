#include <stdio.h>



int main() {

    // & And
    // | Or
    // ^ Xor
    // << Left Shift
    // >> Right Shift

    int x= 6;   // 00000110
    int y= 12;  // 00001100
    int z= 0;   // 00000000

    z= x&y;     // 00000100 4
    printf("And: %d\n",z);

    z= x|y;     // 00001110 14
    printf("Or: %d\n",z);
    
    z= x^y;     // 00001010 10
    printf("Xor: %d\n",z);

    z= x<<1;    // 00000110 => 00001100 => 00011000 => 00110000
    printf("1 Time Left Shifted X:%d\n",z);
    z= x<<2;
    printf("2 Time Left Shifted X:%d\n",z);
    z= x<<3;
    printf("3 Time Left Shifted X:%d\n",z);

    z=x>>1;     // 00000011
    printf("1 Time Right Shifted X:%d\n",z);
    z=x>>2;     // 00000001
    printf("2 Time Right Shifted X:%d\n",z);

    return 0;
}