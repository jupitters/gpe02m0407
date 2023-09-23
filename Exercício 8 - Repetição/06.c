#include <stdio.h>
#include <string.h>

int main(void){
    char escolha[2], mes[2] = "m", ano[2] = "a", validacao[2], sim[2] = "s";
    int numMes, numAno;


    do{
        printf("Voce gostaria de saber quantos dias ha em em determinado mes ou determinado ano?\nUtilize 'm' para mes e 'a' para ano.\n");
        fgets(escolha, 2, stdin);
        fflush(stdin);

    
        if(strcmp(escolha, mes)==0){
            printf("Digite o numero do mes que voce gostaria de saber a quantidade de dias...\n");
            scanf("%d", &numMes);
            fflush(stdin);

            if(numMes == 2){
                printf("Esse mes possui 28 dias.\n");

                printf("Voce deseja outras entradas? (s para sim/ Qualquer outra tecla para nao)\n");
                fgets(validacao, 2, stdin);
                fflush(stdin);

            }else if(numMes == 4 || numMes == 6|| numMes == 9 || numMes == 11){
                printf("Esse mes possui 30 dias.\n");

                printf("Voce deseja outras entradas? (s para sim/ Qualquer outra tecla para nao)\n");
                fgets(validacao, 2, stdin);
                fflush(stdin);
            }else{
                printf("Esse mes possui 31 dias\n");

                printf("Voce deseja outras entradas? (s para sim/ Qualquer outra tecla para nao)\n");
                fgets(validacao, 2, stdin);
                fflush(stdin);
            }

        }else if(strcmp(escolha, ano)==0){
            printf("DIgite o numero de um ano que voce gostaria de saber a quantidade de dias...\n");
            scanf("%d", &numAno);
            fflush(stdin);

            if(numAno % 400 == 0){
                printf("Esse ano possui 366 dias.\n");

                printf("Voce deseja outras entradas? (s para sim/ Qualquer outra tecla para nao)\n");
                fgets(validacao, 2, stdin);
                fflush(stdin);
            }else{
                printf("Esse ano possui 365 dias.\n");

                printf("Voce deseja outras entradas? (s para sim/ Qualquer outra tecla para nao)\n");
                fgets(validacao, 2, stdin);
                fflush(stdin);
            }
        }else{
            printf("Entrada Invalida.\n");

            printf("Voce deseja outras entradas? (s para sim/ Qualquer outra tecla para nao)\n");
                fgets(validacao, 2, stdin);
                fflush(stdin);
        }
    }while(strcmp(validacao, sim)==0);


    return 0;
}