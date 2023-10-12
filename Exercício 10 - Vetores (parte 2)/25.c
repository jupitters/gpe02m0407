#include <stdio.h>

int main(void){
    int vetor[20];
    int i = 0, num = 1;

	    while (i < 20) {
	        if (num % 7 != 0 && num % 10 != 7) { 
	            vetor[i] = num;
	            i++;
	        }
	        num++;
	    }
	
	
	    printf("Numeros que nao sao multiplos de 7 ou que nao terminam em 7:\n");
	    for (i = 0; i < 20; i++) {
	        printf("%d ", vetor[i]);
	    }
	
	    return 0;
}
