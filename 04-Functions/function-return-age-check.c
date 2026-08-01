#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age){
    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(ageCheck(age)){
        printf("You may sign up\n");
    }
    else{
        printf("You must be 18+ to sign up\n");
    }

    return 0;
}