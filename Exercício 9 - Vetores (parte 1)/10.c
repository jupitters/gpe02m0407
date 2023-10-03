#include <stdio.h>

int main(void){
    float vetor[15], media = 0;

    for(int i = 1; i <= 15; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &vetor[i]);

        media += vetor[i];
    }

    media = media / 15;
    printf("A media da turma foi de %.2f pontos.", media);

    return 0;
}