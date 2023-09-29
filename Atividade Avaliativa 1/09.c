#include <stdio.h>

int main(void){
    int voto, um = 0, dois = 0, tres = 0, quatro = 0, nulo = 0, branco = 0;
    
    do{
        printf("-ELEICAO PRESIDENCIAL-\n");
        printf("1 - Candidato Um\n");
        printf("2 - Candidato Dois\n");
        printf("3 - Candidato Tres\n");
        printf("4 - Candidato Quatro\n");
        printf("5 - Voto Nulo\n");
        printf("6 - Voto Branco\n");

        printf("Qual o seu voto?\n");
        scanf("%d", &voto);

        switch (voto){
        case 1:
            um++;
            break;
        case 2:
            dois++;
            break;
        case 3:
            tres++;
            break;
        case 4:
            quatro++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        default:
            printf("Voto invalido.\n");
            break;
        }
    }while(voto != 0);

    printf("O total de votos no candidato Um foi: %d\n", um);
    printf("O total de votos no candidato Dois foi: %d\n", dois);
    printf("O total de votos no candidato Tres foi: %d\n", tres);
    printf("O total de votos no candidato Quatro foi: %d\n", quatro);
    printf("Total de votos nulos: %d\n", nulo);
    printf("Total de votos brancos: %d\n", branco);


    return 0;
}