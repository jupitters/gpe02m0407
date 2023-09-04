#include <stdio.h>

int main(void){
    int ddd;

    printf("Informe um numero de DDD...\n");
    scanf("%d", &ddd);

    switch (ddd){
    case 61:
        printf("Este numero de DDD pertence ao Distrito Federal.\n");
        break;
    case 71:
        printf("Este numero de DDD pertence a Salvador(BA).\n");
        break;
    case 11:
        printf("Este numero de DDD pertence a Sao Paulo(SP).\n");
        break;
    case 21:
        printf("Este numero de DDD pertence ao Rio de Janeiro(RJ).\n");
        break;
    case 32:
        printf("Este numero de DDD pertence a Juiz de Fora(MG).\n");
        break;
    case 19:
        printf("Este numero de DDD pertence a Campinas(SP).\n");
        break;
    case 27:
        printf("Este numero de DDD pertence a Vitoria(ES).\n");
        break;
    case 31:
        printf("Este numero de DDD pertence a Belo Horizonte(MG).\n");
        break;
    default:
        printf("Sem identificacao.\n");
        break;
    }
    
    return 0;
}