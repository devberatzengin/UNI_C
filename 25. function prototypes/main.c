#include <stdio.h>
int findmax(int ,int );

int main () {

    // WHAT IS IT?
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    // ADVANTAGES
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files


    int max=findmax(3,5);   
    printf("max valuse is %d",max);




    return 0;
}

int findmax(int x,int y){
    return (x>y) ? x : y;
}