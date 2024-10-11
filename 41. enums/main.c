#include <stdio.h>
#include <stdlib.h>

enum day{
        Mon=1,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat,
        Sun};


int main() {

    enum day today =Sat;
//    printf("Wednesday is %d. day of week",today);

    if (today==Sat||today==Sun)
    {
        printf("It's weekend, Let's party");
    }else{
        printf("It's weekdays, Let's get back to work");
    }
    


    return 0;
}