#include <stdio.h>

void matriz(int vetor[][10], int n){
    int i, j, aux[10][10];

    for(i=0;i < n;i++){
        for(j=0;j<10;j++){
            if(i == 1){
                aux[i][j] = vetor[i][j];
                vetor[i][j] = vetor[7][j];
                vetor[1][j] = aux[i][j];
            }
            if(j == 4){
                aux[i][j] = vetor[i][j];
                vetor[i][j] = vetor[i][9];
                vetor[i][9] = aux[i][j];
            }
            if(i == j){
                aux[i][j] = vetor[i][j];
                if(i + j == 9){
                    vetor[i][i] = vetor[i][j];
                    vetor[i][j] = aux[i][i];
                }
            }
            if(i == 4){
                for(int k=0;k<10;k++){
                    aux[4][k] = vetor[4][k];
                    vetor[4][k] = vetor[k][9];
                    vetor[k][9] = aux[4][k];
                }
            }

            printf("%d ", vetor[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[10][10] = {
    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
    {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
    {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
    {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
    {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
    {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
    {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
    {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };
    matriz(mat, 10);

    return 0;
}