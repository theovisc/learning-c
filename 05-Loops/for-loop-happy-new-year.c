#include <stdio.h>
#include <unistd.h>   // <windows.h> on windows

int main(){

    for(int i = 10; i > 0; i--){
        printf("%d\n", i);
        sleep(1);
    }

    printf("HAPPY NEW YEAR!\n");

    return 0;
}