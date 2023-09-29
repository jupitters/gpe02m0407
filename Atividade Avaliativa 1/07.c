#include <stdio.h>

int main(void){
    float nota1, nota2, nota3, mediaAluno, mediaTurma = 0;
    
    int i;
    for(i = 1; i <= 30; i++){
        printf("\nDigite as notas do aluno %d separadas somente por espacos...\n", i);
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        mediaAluno = (nota1 * 2 + nota2 * 4 + nota3 * 4) / 10;

        printf("A media do aluno %d foi: %.2f\n", i, mediaAluno);

        if(mediaAluno >= 7){
            printf("Aprovado\n");
        }else{
            printf("Reprovado\n");
        }

        mediaTurma += mediaAluno;
    }

    mediaTurma = mediaTurma / 30;

    printf("\nA media geral da turma foi: %.2f\n", mediaTurma);

    return 0;
}