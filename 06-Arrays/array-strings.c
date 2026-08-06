#include <stdio.h>

int main(){

    char fruits[][10] = {"apple", "banana", "coconut"};

    fruits[0][0] = 'e';
    fruits[0][4] = 'A';


    for(int i = 0; i < sizeof(fruits) / sizeof(fruits[0]); i++){
        printf("%s ", fruits[i]); 
    }


    printf("\n");

    return 0; 
}