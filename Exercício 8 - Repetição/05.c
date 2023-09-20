#include <stdio.h>

int main(void){
    char nome[50], sexo[2], masculino[2] = "m", feminino[2] = "f";
    int idade, verif = 1, voto, votoSam = 0, votoAlex = 0, votoDzsenifer = 0, votoAmandine = 0, votoMarta = 0, individuosTotal = 0;

    printf("Pesquisa de opiniao: Qual das jogadoras listadas voce considera a melhor?\n\n");
    
    do{
        printf("Qual o seu nome?\n");
        fgets(nome, 50, stdin);

        printf("Qual a sua idade?\n");
        scanf("%d", &idade);

        printf("Qual o seu sexo?('m' para masculino e 'f' para feminino)\n");
        fgets(sexo, 2, stdin);

        printf("Qual o seu voto de acordo com a seguinte lista?\n");
        printf("1 - Sam Kerr(Australia)\n2 - Alex Morgan(EUA)\n3 - Dzsenifer Marozsan(Alemanha)\n4 - Amandine Henry(Franca)\n5 - Marta Vieira(Brasil)\n");
        scanf("%d", &voto);

        switch (voto){
        case 1:
            votoSam++;
            break;
        case 2:
            votoAlex++;
            break;
        case 3:
            votoDzsenifer++;
            break;
        case 4:
            votoAmandine++;
            break;
        case 5:
            votoMarta++;
            break;
        default:
            printf("Voto Invalido!\n");
            break;
        }

        if(idade <= 12){
            printf("Voce precisa ter mais que 12 anos!\n");
            return 1;
        }

        individuosTotal++;
        if (individuosTotal > 50)
        {
            printf("Limite minimo para pesquisa atingido! Voce gostaria de continuar?\n(1 para sim, 0 para nao)\n");
            scanf("%d", verif);

        }else if(individuosTotal == 300){
            printf("Numero maximo de 300 pessoas entrevistadas atingido, agradecemos pelo seu tempo\n");
            break;
        }
        
    }while(verif != 0);

    printf("A jogadora Sam Kerr(Australia) recebeu %d votos.\n", votoSam);
    printf("A jogadora Alex Morgan(EUA) recebeu %d votos.\n", votoAlex);
    printf("A jogadora Dzsenifer Marozsan(Alemanha) recebeu %d votos.\n", votoDzsenifer);
    printf("A jogadora Amandine Henry(Franca) recebeu %d votos.\n", votoAmandine);
    printf("A jogadora Marta Vieira(Brasil) recebeu %d votos.\n", votoMarta);
    


    return 0;
}