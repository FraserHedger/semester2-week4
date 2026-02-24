
/*
Name: Fraser Hedger    
Student ID: 201919103
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer

    // process the command-line data using appropriate string functions
    
    char *str = argv[1];
    int len = strlen(str);
    char buffer[200] = "";
    for (int i = 0; i < len - 1; i++)
    {
        char temp[3] = {str[i], '-', '\0'};
        strcat(buffer, temp);
    } 

    strcat(buffer, &str[len - 1]);

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}
