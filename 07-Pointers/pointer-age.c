#include <stdio.h>

void birthDay(int *pAge){
    *pAge += 1;
}

int main(){

    int age = 20; 

    int *pAge = &age; 

    birthDay(pAge); 

    printf("You are %d years old\n", age);

    return 0;
}