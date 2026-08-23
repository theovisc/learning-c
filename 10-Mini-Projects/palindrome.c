#include <stdio.h>
#include <string.h>

int main(){

    char name[50] = "";
    printf("Enter a word: ");
    fgets(name, sizeof(name), stdin);  //or scanf(%s, &name); because it's only one word
    name[strlen(name) - 1] = '\0';

    int l_name = strlen(name);
    int is_palindrome = 1;

    for(int i=0; i < (l_name+1)/2; i++){
        if(name[i] != name[l_name - i - 1]){
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome){
        printf("%s is a palindrome\n", name);
    }
    else{
        printf("%s is not a palindrome\n", name);
    }

    return 0;
}