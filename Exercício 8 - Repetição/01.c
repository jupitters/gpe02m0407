#include <stdio.h>
#include <string.h>

int main(void){
    int idade, difPerc, difIdade, notaOtimo = 0, notaBom = 0, notaRegular = 0, notaRuim = 0, notaPessimo = 0, idadeSomaRuim = 0, idadeMaior = 0, idadeMaiorOtimo = 0, idadeMaiorRuim = 0;
    char nota[2], otimo[2] = "a", bom[2] = "b", regular[2] = "c", ruim[2] = "d", pessimo[2] = "e";
    float mediaIdade;

    int i;
    for(i = 0; i < 100; i++){
        printf("Qual a sua idade?\n");
        scanf("%d", &idade);
        fflush(stdin);

        printf("E o que voce achou do filme?\n(Utilize letras minusculas: 'a' para otimo, 'b' para bom, 'c' para regular, 'd' para ruim e 'e' para pessimo.)\n");
        fgets(nota, 2, stdin);
        if(strcmp(nota, otimo)==0){
            notaOtimo++;
            if(idade > idadeMaiorOtimo){
                idadeMaiorOtimo = idade;
            }
        }else if(strcmp(nota, bom)==0){
            notaBom++;
        }else if(strcmp(nota, regular)==0){
            notaRegular++;
        }else if(strcmp(nota, ruim)==0){
            notaRuim++;
            idadeSomaRuim += idade;
            if(idade > idadeMaiorRuim){
                idadeMaiorRuim = idade;
            }
        }else if(strcmp(nota, pessimo)==0){
            notaPessimo++;
            if(idade > idadeMaior){
                idadeMaior = idade;
            }
        }else{
            printf("Entrada Invalida.\n");
            i--;
        }

    }

    if (notaBom > notaRegular){
        difPerc = notaBom - notaRegular;
    }else{
        difPerc = notaRegular - notaBom;
    }

    mediaIdade = idadeSomaRuim / notaRuim;

    difIdade = idadeMaiorOtimo - idadeMaiorRuim;

    printf("A quantidade de respostas 'otimo' foram: %d\n", notaOtimo);
    printf("A diferenca percentual entre respostas bom e regular e: %d\n", difPerc);
    printf("A media de idade das pessoas que responderam ruim e: %.1f\n", mediaIdade);
    printf("A porcentagem de respostas pessimo e igual a %d%% e a maior idade que utilizou essa opcao foi: %d\n", notaPessimo, idadeMaior);
    printf("A diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim e igual a: %d\n", difIdade);
       

    return 0;
}
