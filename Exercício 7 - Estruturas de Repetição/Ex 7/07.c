#include <stdio.h>
#include <string.h>

int main(void){
    char sexo[2], olhos[2], cabelo[2], masc[2] = "m", fem[2] = "f", az[2] = "a", ve[2] = "v", cas[2] = "c", pre[2] = "p", loi[2] = "l", rui[2] = "r";
    int idade = 0;
    float salario;

    printf("Pesquisa para cadastro:\n(para indicar o fim da pesquisa, indique a idade como -1)\n");

    do{
        printf("Qual o seu sexo?(m ou f)\n");
        fgets(sexo, 2, stdin);
        fflush(stdin);
        if(strcmp(sexo, masc)==0 || strcmp(sexo, fem)==0){
            printf("masculino ou fem \n");
        }else{
            printf("Entrada invalida.");
            return 1;
        }
        
        printf("Qual a cor dos seus olhos?(a = azuis, v = verdes, c = castanhos, p = pretos)\n");
        fgets(olhos, 2, stdin);
        fflush(stdin);
        if(strcmp(olhos, az)==0 || strcmp(olhos, ve)==0 || strcmp(olhos, cas)==0 || strcmp(olhos, pre)==0){
            printf("azuis, verdes, castanhos ou pretos \n");
        }else{
            printf("Entrada invalida.");
            return 1;
        }

        printf("Qual a cor dos seus cabelos?(l = loiros, c = castanhos, p = pretos, r = ruivos)\n");
        fgets(cabelo, 2, stdin);
        fflush(stdin);
        if(strcmp(cabelo, loi)==0 || strcmp(cabelo, cas)==0 || strcmp(cabelo, pre)==0 || strcmp(cabelo, rui)==0){
            printf("loito, castanho, preto ou ruivo \n");
        }else{
            printf("Entrada invalida.");
            return 1;
        }

        printf("Qual a sua idade?\n");
        scanf("%d", &idade);
        if(idade == -1){
            printf("Fim");
            return 0;
        }else if(idade < 100 || idade > 10){
            printf("entre 10 e 100\n");
        }else{
            printf("Entrada invalida");
            return 1;
        }

        printf("Qual o valor do seu salario?\n");
        scanf("%f", &salario);
        fflush(stdin);

    }while(idade != -1);


    return 0;
}