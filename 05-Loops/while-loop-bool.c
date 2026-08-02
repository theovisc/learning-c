#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isRunning = true; 
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue ? (Y/N): ");
        scanf(" %c", &response);

        if(response == 'N' || response == 'n'){
            isRunning = false;
        }
        else if(response != 'Y' && response != 'y'){
            printf("Please enter either Y or N\n");
        }
    }

    printf("You exit the game\n");

    return 0;
}