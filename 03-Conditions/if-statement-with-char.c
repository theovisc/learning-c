#include <stdio.h>
#include <string.h>


int main(){

    char name[30] = "";

    printf("Enter your name : "); 
    //scanf("%s", name); //not & for arrays ! only for int, float, ...
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';  //only needed with fgets, not with scanf

    if(strlen(name) == 0){
        printf("You did not enter your name\n");
    }
    else{
        printf("Hello %s\n", name);
    }

    return 0; 
}