#include <stdio.h>

int main(void){
    float altChico = 1.5, altZe = 1.1, ano = 0;

    while(altChico > altZe){
        altChico = 1.5;
        altZe = 1.1;

        altChico += 0.02 * ano;
        altZe += 0.03 * ano;

        ano++;
    }

    printf("Vai demorar %.0f anos para que Ze seja maior que Chico.", ano);

    return 0;
}