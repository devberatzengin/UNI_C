#include <stdio.h>
#include <string.h>


struct AboutPlayer
{
    char name[20];
    int age;
    int score;

};




int main() {

    struct AboutPlayer Player1;
    struct AboutPlayer Player2;

    strcpy(Player1.name,"Osmihen");
    Player1.age =20;
    Player1.score=3;

    strcpy(Player2.name,"Mertens");
    Player2.age =38;
    Player2.score=1;

    printf("%s' have %d score in %d Years old.",Player2.name,Player2.score,Player2.age);


    return 0;
}