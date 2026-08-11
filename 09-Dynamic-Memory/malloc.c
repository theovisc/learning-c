#include <stdio.h>
#include  <stdlib.h> 

int main(){

    int number = 0;
    printf("How many grades do you want to enter: ");
    scanf("%d", &number);

    char* grades = malloc(sizeof(char) * number);

    for(int i = 0; i < number; i++){
        printf("Enter a grade: ");
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c\n", grades[i]);
    }


    return 0;
}