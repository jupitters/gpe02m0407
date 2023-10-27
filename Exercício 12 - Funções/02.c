#include <stdio.h>
#define TAM_MAX 500

void locGratis(int *A, int tam){
    int B[TAM_MAX];

    for(int i = 0;i < tam;i++){
        B[i] = A[i] / 15;
        printf("O cliente no indice %d tem direito a %d filme(s) gratis.\n", i, B[i]);
    }

}

int main(){
    int A[TAM_MAX];
    locGratis(A, TAM_MAX);

    return 0;
}