#include <stdio.h>
#include  <stdlib.h> 

int main(){

    int number = 0;
    printf("How many grades do you want to enter: ");
    scanf("%d", &number);

    char* grades = malloc(sizeof(char) * number);

    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%c\n", grades[i]);
    }

    free(grades);
    grades = NULL;


    return 0;
}