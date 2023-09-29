#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int a, b, c, temp;

    printf("Digite um valor para o lado A de um triangulo...\n");
    scanf("%d", &a);
    printf("Digite um valor para o lado B de um triangulo...\n");
    scanf("%d", &b);
    printf("Digite um valor para o lado C de um triangulo...\n");
    scanf("%d", &c);

    // verificando a condição de existencia de um triangulo para os três lados
    if(a > abs(b-c) && a < (b+c)){
        if(b > abs(a-c) && b < (a+c)){
            if(c > abs(a-b) && c < (a+b)){
                printf("O trianguo e valido!\n");
                
                // colocando em ordem crescente para fazer os calculos usando pitagoras
                if(a > b){
                temp = a;
                a = b;
                b = temp;
                }
                if(b > c){
                    temp = b;
                    b = c;
                    c = temp;
                }
                if(a > b){
                    temp = a;
                    a = b;
                    b = temp;
                }

                //classificando os triangulos de acordo com os angulos

                if(pow(c, 2) == pow(a, 2) + pow(b, 2)){
                    printf("E e um triangulo retangulo!\n");
                }else if(pow(c, 2) < pow(a, 2) + pow(b, 2)){
                    printf("E e um triangulo acutangulo!\n");
                }else if(pow(c, 2) > pow(a, 2) + pow(b, 2)){
                    printf("E e um triangulo obtusangulo!\n");
                }

            }else{
                printf("O valor da lateral C torna o triangulo invalido.\n");
                return 1;
            }

        }else{
            printf("O valor da lateral B torna o triangulo invalido.\n");
            return 1;
        }

    }else{
        printf("O valor da lateral A torna o triangulo invalido.\n");
        return 1;
    }

    return 0;
}