#include <stdio.h>

int main(void){
    int idade, meses, anos, dias, final;

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    printf("Ha quantos meses voce fez aniversario?\n");
    scanf("%d", &meses);

    printf("Quantos dias se passaram desde a ultima vez que voce viu somente o dia do mes do seu aniversario?\n");
    scanf("%d", &dias);

    anos = idade * 365;
    meses = meses * 30;
    final = anos + meses + dias;

    printf("Sua idade em dias e igual a: %d", final);

    return 0;
}