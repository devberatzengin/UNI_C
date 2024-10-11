/*
#include <stdio.h>
#include <string.h>


typedef char user[25];




int main() {

    user user1 ="Ahmet";

    printf("%s' name is %s",user1,user1);


    return 0;
}

*/



#include <stdio.h>
#include <string.h>


typedef struct 
{
   char name[25];
   int id;
   char password[12];
}user;





int main() {

    user user1 ={"Ahmet",12345,"pass1"};
    user user2 ={"Mehmet",54321,"pass2"};

    printf("name:%s\n password:%s\n id:%d\n",user1.name,user1.password,user1.id);
    printf("name:%s\n password:%s\n id:%d\n",user2.name,user2.password,user2.id);


    return 0;

}
