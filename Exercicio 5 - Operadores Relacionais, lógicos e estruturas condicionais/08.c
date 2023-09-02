#include <stdio.h>

int main(void){
    int idade, anosTrabalho;

    printf("Qual a sua idade\n");
    scanf("%d", &idade);
    printf("Quantos anos voce tem de servico?\n");
    scanf("%d", &anosTrabalho);

    if(idade >= 65){
        printf("Voce pode se aposentar!");
    }else if(anosTrabalho >= 30){
        printf("Voce pode se aposentar!");
    }else if((idade >=60) && (anosTrabalho >= 25)){
        printf("Voce pode se aposentar!");
    }else{
        printf("Voce NAO pode se aposentar!");
    }

    return 0;
}