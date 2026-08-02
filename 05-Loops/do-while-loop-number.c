#include <stdio.h>

int main(){

    int x = 1; 
    do{
        printf("Enter a number grater than 0: ");
        scanf("%d", &x);
    }while(x <= 0);    //with "do while loop", you check the condition at the end, rather than at the beginning

    return 0;
}