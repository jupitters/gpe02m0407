#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;

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
                
                // verificando o tipo de triangulo
                if(a == b && b == c){
                    printf("E o mesmo e um triangulo equilatero.\n");
                }else if(a == b || b == c || a == c){
                    printf("E o mesmo e um triangulo isoceles!\n");
                }else{
                    printf("E o mesmo e um triangulo escaleno!\n");
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