#include <stdio.h>
#include <stdlib.h>

struct AboutStudent
{
    char name[20];
    float gpa;
};




int main(){

    struct AboutStudent Student1={"Sunger Bob",2.50};
    struct AboutStudent Student2={"Spunge Bob",3.75};
    struct AboutStudent Student3={"Suger Bob",3.55};
    struct AboutStudent Student4={"Subsub Bob",3.90};

    struct AboutStudent Students[]={Student1,Student2,Student3,Student4};

    for (int i = 0; i < sizeof(Students)/sizeof(Students[0]); i++)
    {
        printf("%d. Student name: %-12s",i+1,Students[i].name);
        printf("%d. Student Gpa: %.2f\n",i+1,Students[i].gpa);
        printf("\n");
    }
    


    return 0;
}