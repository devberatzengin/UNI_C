#include <stdio.h>


int main () {

    int arr0[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr1[3][3];
    arr1[0][0]=1;
    arr1[0][1]=2;
    arr1[0][2]=3;
    arr1[1][0]=4;
    arr1[1][1]=5;
    arr1[1][2]=6;
    arr1[2][0]=7;
    arr1[2][1]=8;
    arr1[2][2]=9;


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr0[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}