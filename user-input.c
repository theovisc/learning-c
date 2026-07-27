#include <stdio.h>
#include <string.h>


int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; 
    char name[30] = ""; 

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Enter your gpa : ");
    scanf("%f", &gpa);

    printf("Enter your grade : ");
    scanf(" %c", &grade);    // the space before %c is needed to clear the input buffer

    printf("Enter your full name : ");
    // scanf(" %s", name);   stop reading when there is a space...
    getchar();    // clear the input buffer 
    fgets(name, sizeof(name), stdin); 
    name[strlen(name) - 1] = '\0';

    printf("You are %d years old.\n", age);
    printf("Your gpa is %.2f\n", gpa);
    printf("Your grade is %c\n", grade);
    printf("Your full name is %s\n", name); 


    return 0;
}