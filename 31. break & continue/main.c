#include <stdio.h>


int main() {

    // continue = skips rest of code & forces the next internation of the loop
    // break = exits a loop / switch

    for (int  i = 0; i <20; i++)
    {
        if (i==13)// it's will write 13 and end
        {
            break;
        }
        printf("%d\n",i+1); 
    }
    
    for (int  i = 0; i <20; i++)
    {
        if (i==13)// it's will pass 13 and go ahead
        {
            continue;;
        }
        printf("%d\n",i+1); 
    }
    



    return 0;
}