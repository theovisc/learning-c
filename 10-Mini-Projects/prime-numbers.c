#include <stdio.h>

int main(){

    int min = 0; 
    printf("Enter a minimal value (>=2): ");
    scanf("%d", &min);

    int max = 0; 
    printf("Enter a maximal value: ");
    scanf("%d", &max);


    for(int i = min; i <= max; i++){
        int nbr_P = 1;
        for(int j = 2; j <= i/2; j++){
            if(i%j == 0){
                nbr_P = 0;
                break;
            }
        }
        if(nbr_P){
            printf("%d\n",  i);
        }
    }

    return 0;
}