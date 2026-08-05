#include <stdio.h>

int main(){

    int numbers[5] = {0}; 

    for(int i = 0; i < 5; i++){
        printf("Enter a number: "); 
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d\n", numbers[i]);
    }

    return 0;
}