#include <stdio.h>
#include <string.h>

int main(){

    char name[2][25] = {0};

    int size = sizeof(name) / sizeof(name[0]);

    for(int i = 0; i < size; i++){
        printf("Enter a name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strlen(name[i]) - 1] = '\0';
    }

    for(int i = 0; i < size; i++){
            printf("%s\n", name[i]);
        }


    return 0;
}