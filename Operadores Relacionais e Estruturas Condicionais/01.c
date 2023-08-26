#include <stdio.h>

int main(void){
    // operadores relacionais e condicionais
    int idade;

    printf("Digite a sua idade...\n");
    scanf("%d", &idade);

    if ( idade >= 18)
    {
        printf("Voce e maior de idade\n");
    }
    else
    {
        printf("Voce e menor de idade\n");
    }
    
    return 0;
}