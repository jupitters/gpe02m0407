#include <stdio.h>

int main(void){
    int i, res = 0;

    for(i = 0; i <= 50; i += 2){
        res += i;
    }
    printf("%d\n", res);

    return 0;
}