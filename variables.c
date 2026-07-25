#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 20;
    float battery = 81.4f;
    double pi = 3.14159265359;
    char grade = 'A';
    char name[] = "Théo";
    bool isOnline = true;

    printf("I am %d years old \n", age);
    printf("My battery is at %.1f%%\n", battery);
    printf("The value of pi is %.11lf\n", pi);
    printf("I got the following grade : %c\n", grade);
    printf("My name is %s\n", name);  
    printf("Online : %d", isOnline);


    return 0;
}