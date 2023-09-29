#include <stdio.h>
#include <string.h>

int main(void){
    int i, codCidade, numVeiculos, numAcidentes, maiorAcidentes = 0, menorAcidentes = 10000000, cidMaiorAci, cidMenorAci, mediaVeiculos = 0, mediaRS = 0, numCidades = 0;
    char estado[3], RS[3] = "RS";

    printf("- IBGE - Acidentes de Transito nas Cidades Brasileiras\n");
    
    for(i = 0; i < 5; i++){
        printf("Qual o codigo da sua cidade?\n");
        scanf("%d", &codCidade);
        fflush(stdin);
        printf("Qual o estado?(somente a sigla)\n");
        fgets(estado, 3, stdin);
        fflush(stdin);
        printf("Qual o numero de veiculos de passeio?\n");
        scanf("%d", &numVeiculos);
        fflush(stdin);
        printf("Quantos acidentes em que houveram vitimas ocorreram?\n");
        scanf("%d", &numAcidentes);
        fflush(stdin);

        if(numAcidentes > maiorAcidentes){
            maiorAcidentes = numAcidentes;
            cidMaiorAci = codCidade;
        }
        if(numAcidentes < menorAcidentes){
            menorAcidentes = numAcidentes;
            cidMenorAci = codCidade;
        }

        mediaVeiculos += numVeiculos;

        if(strcmp(estado, RS)==0){
            numCidades++;
            mediaRS += numAcidentes;
        }
    }

    mediaVeiculos = mediaVeiculos / 200;
    mediaRS = mediaRS / numCidades;

    printf("O maior indice de acidentes de transito pertence a cidade de codigo %d e foi de %d acidente(s)\n", cidMaiorAci, maiorAcidentes);
    printf("O menor indice de acidentes de transito pertence a cidade de codigo %d e foi de %d acidente(s)\n", cidMenorAci, menorAcidentes);
    printf("A media de veiculos nas cidades brasileiras e de %d\n", mediaVeiculos);
    printf("A media de acidentes com vitimas entre as cidades do RS e de %d\n", mediaRS);


    return 0;
}