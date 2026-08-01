#include <stdio.h>

double square(double x){
    return x*x;
}

int main(){

    double x = 0.0;
    printf("Enter a number: ");
    scanf("%lf", &x);

    double y = square(x); 

    printf("The sqaure of %lf is %lf\n", x, y);

    return 0;
}