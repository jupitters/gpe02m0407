#include<stdio.h>
#define TAM 3

int main(void){
	    int vetorA[TAM], vetorB[TAM];
	    int produtoEscalar = 0, i;
	
	    for(i = 0; i < TAM; i++){
	        printf("Valores vetor A");
	        scanf("%d", &vetorA[i]);
	    }
	    for(i = 0; i < TAM; i++){
	        printf("Valores vetor B");
	        scanf("%d", &vetorB[i]);
	    }
	   
	    for(i = 0; i < TAM; i++){
	        produtoEscalar += vetorA[i] * vetorB[i];
	    }
	    printf("Produto escalar: %d",produtoEscalar );

    return 0;
}