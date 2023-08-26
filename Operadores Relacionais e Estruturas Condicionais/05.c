#include <stdio.h>

int main(void){
    int x, y;

    x = 10 % 5 * 2;
    y = 5 * 2 + 1;
    if (x != y){
        printf("A condicao e diferente(ou resultado VERDADEIRO)");
    }
    else{
        printf("A condicao NAO e diferente(ou resultado FALSO)");
    }


    return 0;
}