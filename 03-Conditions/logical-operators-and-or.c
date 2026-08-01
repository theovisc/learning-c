#include <stdio.h>


int main(){

    // && : and
    // || : or
    // ! : not

    int temp = 0; 
    printf("Enter a temperature (in °C) : ");
    scanf("%d", &temp);



    if(temp > 0 && temp < 30){
        printf("The temperature is GOOD\n");
    }
    else{
        printf("The temperature is BAD\n");
    }

    //we could also run this code instead

    if(temp <= 0 || temp >= 30){
        printf("The temperature is BAD\n");
    }
    else{
        printf("The temperature is GOOD\n");
    }


    return 0;
}