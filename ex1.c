#include <stdio.h>

int main(void){
    char nome[50];
    int idade;
    int matricula;
    char endereco[50];
    char curso[50];
    int periodo;
    char disciplinas[100];

    printf("Coloque seu nome...\n");
    fgets(nome, 50, stdin);
    fflush(stdin);

    printf("Coloque sua idade...\n");
    scanf("%i", &idade);
    fflush(stdin);

    printf("Coloque sua matricula(somente numeros)...\n");
    scanf("%i", &matricula);
    fflush(stdin);

    printf("Coloque seu endereco...\n");
    fgets(endereco, 50, stdin);
    fflush(stdin);

    printf("Coloque seu curso...\n");
    fgets(curso, 50, stdin);
    fflush(stdin);

    printf("Coloque seu periodo(somente o numero)...\n");
    scanf("%i", &periodo);
    fflush(stdin);

    printf("Coloque suas disciplinas...\n");
    fgets(disciplinas, 100, stdin);
    fflush(stdin);

    printf("\nNome: %sIdade: %i\nMatricula: UC%i\nEndereco: %sCurso: %sPeriodo: %i\nDisciplinas: %s", nome, idade, matricula, endereco, curso, periodo, disciplinas);

    return 0;
}