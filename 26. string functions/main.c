#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Bro";
    char string2[] = "Code";
    // strlwr(string1);                         // converts a string to lowercase
    // strupr(string1);                         // converts a string to uppercase
    // strcat(string1, string2);                // appends string2 to end of string1
    // strncat(string1, string2, 1);            // appends n characters from string2 to string1
    // strcpy(string1, string2);                // copy string2 to string1
    // strncpy(string1, string2, 4);            // copy n characters of string2 to string1

    // strset(string1, '?');                    // sets all characters of a string to agiven characters
    // strnset(string1, 'x', 1);                // sets first n characters of a stringto given character
    // strrev(string1);                         // reverses a string

    // int result = strlen(string1);            // retuns string lenght as int 
    // int result = strcmp(string1, string2);   // string compare all characters
    // int result = strncmp(string1,string2,1); // string compare n characters
    

    printf("%s", string1);
    return 0;
}