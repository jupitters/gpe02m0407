#include <stdio.h>

int main(void){
    float mediaSalario = 0, mediaFilhos = 0, maiorSalario = 0, ate100 = 0, salarioInd, filhosInd, popTotal = 0;

    do{
        printf("Qual o seu salario?\n");
        scanf("%f", &salarioInd);
        if(salarioInd < 0){
            break;
        }
        printf("Quantos filhos voce tem?\n");
        scanf("%f", &filhosInd);

        mediaSalario += salarioInd;
        mediaFilhos += filhosInd;

        if(salarioInd > maiorSalario){
            maiorSalario = salarioInd;
        }

        if(salarioInd <= 100){
            ate100++;
        }

        popTotal++;
    }while(salarioInd > 0);

    mediaSalario = mediaSalario / popTotal;
    mediaFilhos = mediaFilhos / popTotal;
    ate100 = ate100 / popTotal * 100;

    printf("\nA media de salario da populacao e: %.2f\n", mediaSalario);
    printf("A media do numero de filhos da populacao e: %.2f\n", mediaFilhos);
    printf("O maior salario da populacao e: %.2f\n", maiorSalario);
    printf("O percentual de pessoas com salario ate R$100,00 e: %.0f%%\n", ate100);

    return 0;
}