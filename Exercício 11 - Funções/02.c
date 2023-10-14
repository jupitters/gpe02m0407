#include <stdio.h>

void mes(){
    int num;
    do{
        printf("Digite um numero de acordo com os meses: ");
        scanf("%d", &num);
    }while(num < 1 && num > 12);
    
    switch (num)
    {
    case 1:
        printf("Janeiro possui 31 dias.\n");
        break;
    case 2:
        printf("Fevereiro possui 28 dias.\n");
        break;
    case 3:
        printf("Marco possui 31 dias.\n");
        break;
    case 4:
        printf("Abril possui 30 dias.\n");
        break;
    case 5:
        printf("Maio possui 31 dias.\n");
        break;
    case 6:
        printf("Junho possui 30 dias.\n");
        break;
    case 7:
        printf("Julho possui 31 dias.\n");
        break;
    case 8:
        printf("Agosto possui 31 dias.\n");
        break;
    case 9:
        printf("Setembro possui 30 dias.\n");
        break;
    case 10:
        printf("Outubro possui 31 dias.\n");
        break;
    case 11:
        printf("Novemrbo possui 30 dias.\n");
        break;
    case 12:
        printf("Dezembro possui 31 dias.\n");
        break;
    default:
        printf("Numero invalido");
        break;
    }

}

int main(void){
    mes();
    
    return 0;
}