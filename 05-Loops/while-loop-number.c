#include <stdio.h>

int main(){

    int x = 0;
    while(x <= 0){
        printf("Enter a number greater than 0: ");
        scanf("%d", &x);
    }

    return 0;
}