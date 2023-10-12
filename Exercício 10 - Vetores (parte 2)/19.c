
#include<stdio.h>

int main(){
	int vetor[50], i;
	
	for(i = 0; i < 50; i++){
		vetor[i] = (i + 5 * i)%(i + 1);
		printf("%d ", vetor[i]);
	}

    return 0;
}
