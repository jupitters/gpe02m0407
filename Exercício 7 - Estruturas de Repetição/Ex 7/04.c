#include <stdio.h>

int main(void){
    int i, res = 0;

    for(i = 1; i <= 5; i++){
        res = i * 3;
        printf("%d\n", res);
    }

    return 0;
}