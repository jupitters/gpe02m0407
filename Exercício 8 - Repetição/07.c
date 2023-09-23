#include <stdio.h>
#include <string.h>

int main(void){
    char nome[50], sexo[2], masculino[2] = "m", feminino[2] = "f";
    float i, altura, peso, altMediaMasc = 0, altMediaFem = 0, altMediaGrupo = 0, pesoMedioMasc = 0, pesoMedioFem = 0, pesoMedioGrupo = 0, numMasc = 0.0001, numFem = 0.0001, resAltFem, resAltMasc, resAltGrupo, resPesoFem, resPesoMasc, resPesoGrupo;

    for(i = 0; i < 10; i++){
        printf("Qual o seu nome?\n");
        fgets(nome, 50, stdin);
        fflush(stdin);

        printf("Qual o seu sexo?(m para masculino e f para feminino)\n");
        fgets(sexo, 2, stdin);
        fflush(stdin);

        printf("Qual a sua altura em metros?(separe por ponto)\n");
        scanf("%f", &altura);
        fflush(stdin);

        printf("Qual o seu peso em kg?(separe por ponto)\n");
        scanf("%f", &peso);
        fflush(stdin);

        altMediaGrupo += altura;
        pesoMedioGrupo += peso;

        if(strcmp(sexo, feminino)==0){
            numFem++;
            altMediaFem += altura;
            pesoMedioFem += peso;

        }else if(strcmp(sexo, masculino)==0){
            numMasc++;
            altMediaMasc += altura;
            pesoMedioMasc += peso;
        }

    }

    resAltFem = altMediaFem / numFem;
    resAltMasc = altMediaMasc / numMasc;
    resAltGrupo = altMediaGrupo / 10;

    resPesoFem = pesoMedioFem / numFem;
    resPesoMasc = pesoMedioMasc / numMasc;
    resPesoGrupo = pesoMedioGrupo / 10;

    printf("O numero de homens que participaram da pesquisa foram: %.0f\n", numMasc);
    printf("O numero de mulheres que participaram da pesquisa foram: %.0f\n", numFem);

    printf("A altura media dos homens e: %.2f metros\n", resAltMasc);
    printf("A altura media das mulheres e: %.2f metros\n", resAltFem);
    printf("A altura media do grupo e: %.2f metros\n", resAltGrupo);

    printf("O peso medio dos homens e: %.2f quilos\n", resPesoMasc);
    printf("O peso medio das mulheres e: %.2f quilos\n", resPesoFem);
    printf("O peso medio do grupo e: %.2f quilos\n", resPesoGrupo);

    return 0;
}
