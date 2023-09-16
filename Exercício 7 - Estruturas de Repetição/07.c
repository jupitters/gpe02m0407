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
    
        }else{
            printf("Entrada Invalida.\n");
            return 1;
        }
        
        printf("Qual a cor dos seus olhos?(a = azuis, v = verdes, c = castanhos, p = pretos)\n");
        fgets(olhos, 2, stdin);
        fflush(stdin);
        if(strcmp(olhos, az)==0 || strcmp(olhos, ve)==0 || strcmp(olhos, cas)==0 || strcmp(olhos, pre)==0){
            
        }else{
            printf("Entrada invalida.\n");
            return 1;
        }

        printf("Qual a cor dos seus cabelos?(l = loiros, c = castanhos, p = pretos, r = ruivos)\n");
        fgets(cabelo, 2, stdin);
        fflush(stdin);
        if(strcmp(cabelo, loi)==0 || strcmp(cabelo, cas)==0 || strcmp(cabelo, pre)==0 || strcmp(cabelo, rui)==0){
            
        }else{
            printf("Entrada invalida.\n");
            return 1;
        }

        printf("Qual a sua idade?\n");
        scanf("%d", &idade);
        if(idade == -1){
            break;
        }else if(idade <= 100 && idade >= 10){
            
        }else{
            printf("Entrada invalida\n");
            return 1;
        }

        printf("Qual o valor do seu salario?\n");
        scanf("%f", &salario);
        fflush(stdin);
        if(salario < 0){
            printf("Entrada invalida.\n");
            return 1;
        }

    }while(idade != -1);

    /* 
    
    porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos(se houvesse banco de dados)

    int porcentagem, individuos, populacaoTotal;

    printf("Qual a populacao total dessa região da pesquisa?\n");
    scanf("%d", &populacaoTotal);

    porcentagem =  (individuos / populacaoTotal) * 100;
    printf("A  porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos e igual a: %d", porcentagem);

    */
    printf("Fim da pesquisa. Agradecemos pelo seu tempo!\n");

    return 0;
}