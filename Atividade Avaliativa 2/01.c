#include <stdio.h>

void calculaSalario(int pecas);
void calculaSalario2(int pecas);
void mostraFinal(float salario);

void validaQuantidade(int pecas){
    if(pecas == -1){
        return;
    }else if(pecas <= 50){
        calculaSalario(1);
    }else if(pecas > 50 && pecas <= 80){
        calculaSalario(pecas);
    }else{
        calculaSalario2(pecas);
    }
}

void calculaSalario(int pecas){
    if(pecas == 1){
        mostraFinal(1);
    }else{
        float nSal = (pecas - 50) * 0.5 + 600;
        mostraFinal(nSal);
    }
}

void calculaSalario2(int pecas){
    float nSal = (pecas - 80) * 0.75 + 615;
    mostraFinal(nSal);
}

void mostraFinal(float salario){
    if(salario == 1){
        printf("Voce recebera R$600.00 neste mes.\n");
    }else{
        printf("Voce recebera R$%.2f neste mes.\n", salario);
    }
}

int main(){
    int pecas;

    printf("   ##########################\n");
    printf("   #   Calculo de Salario   #\n");
    printf("   ##########################\n");
    printf("(Digite -1 para sair do programa)\n");

    do{
        printf("\nQuantas pecas voce fabricou neste mes?\n");
        scanf("%d", &pecas);

        validaQuantidade(pecas);

    }while(pecas != -1);

    return 0;
}