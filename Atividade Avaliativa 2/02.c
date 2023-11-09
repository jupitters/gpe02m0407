#include <stdio.h>
#include <strings.h> 
#include <stdlib.h>

void classificaSalario(float pessoas[][2], int cadastros);
void mostraClassifica(float salario, int classificacao, float sexo);

int main(){
    int nCadastros, check, qtdAcima = 0, qtdAbaixo = 0;
    char sexo[3], masc[3] = "m", masc2[3] = "M", fem[3] = "f", fem2[3] = "F";
    float salario;

    printf("Quantos sao os cadastrados de assalariados a serem feitos?\n");
    scanf("%d", &nCadastros);
    fflush(stdin);

    float pessoas[nCadastros][2];

    for(int i = 0; i < nCadastros; i++){
        
        do{
            check = 0;

            printf("Qual o seu sexo?(M ou F)\n");
            scanf("%s", sexo);

            fflush(stdin);

            if(strcmp(sexo, fem) == 0 || strcmp(sexo, fem2) == 0){
                pessoas[i][0] = 1; // feminino
                check = 1;
            }else if(strcmp(sexo, masc) == 0 || strcmp(sexo, masc2) == 0){
                pessoas[i][0] = 2; // masculino
                check = 1;
            }
        }while(check == 0);

        do{
            printf("Qual o valor do seu salario?\n");
            scanf("%f", &salario);
            fflush(stdin);

            if(salario <= 1){
                printf("O salario precisa ser maior que R$1.00\n");
            }else{
                pessoas[i][1] = salario;

                if(salario > 1400){
                    qtdAcima++;
                }else if(salario < 1400){
                    qtdAbaixo++;
                }
            }

        }while(salario <= 1);
    }

    printf("\n");
    classificaSalario(pessoas, nCadastros);
    printf("\nQuantidade de assalariados abaixo do salario minimo: %d\n", qtdAbaixo);
    printf("Quantidade de assalariados acima do salario minimo: %d\n", qtdAcima);

    return 0;
}

void classificaSalario(float pessoas[][2], int cadastros){
    for(int i=0; i < cadastros; i++){
        if(pessoas[i][1] < 1400){
            mostraClassifica(pessoas[i][1], 1, pessoas[i][0]);
        }else if(pessoas[i][1] == 1400){
            mostraClassifica(pessoas[i][1], 2, pessoas[i][0]);
        }else{
            mostraClassifica(pessoas[i][1], 3, pessoas[i][0]);
        }
    }
}

void mostraClassifica(float salario, int classificacao, float sexo){
    switch(classificacao){
        case 1:
        printf("R$%.2f    Abaixo do salario minimo    ", salario);
        break;
        case 2:
        printf("R$%.2f    Igual ao salario minimo    ", salario);
        break;
        case 3:
        printf("R$%.2f    Acima do salario minimo    ", salario);
        break;
    }

    if(sexo == 1.0){
        printf("Feminino\n");
    }else{
        printf("Masculino\n");
    }
}