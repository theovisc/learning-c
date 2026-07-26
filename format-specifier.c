#include <stdio.h>

int main(){

    float price1 = 9.95;
    float price2 = 1.50;
    float price3 = -6.95; 

    printf("%+06.2f\n", price1);
    printf("%+06.2f\n", price2);
    printf("%+06.2f\n", price3);

    return 0;
}