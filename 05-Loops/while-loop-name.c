#include <stdio.h>
#include <string.h>

int main(){

    char name[30] = ""; 

    printf("Enter your name: "); 
    fgets(name, sizeof(name), stdin); 
    name[strlen(name) - 1] = '\0'; 

    while(strlen(name) == 0){
        printf("You didn't enter your name. Please enter your name: ");
        fgets(name, sizeof(name), stdin); 
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name);

    return 0;
}