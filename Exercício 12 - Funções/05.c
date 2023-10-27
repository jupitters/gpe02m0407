#include <stdio.h>

void contagem(int dia, int mes, int ano){
    int res;
    res = 2023 - ano;
    printf("Voce tem %d anos.\n", res);
    res = res * 12 + mes;
    printf("Sua idade em meses e %d.\n", res);
    res = res * 31 + dia;
    printf("Sua idade em dias e %d", res);
}

int main(){
    int dia, mes, ano;

    printf("Qual a sua data de nascimento?\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    contagem(dia, mes, ano);

    return 0;
}