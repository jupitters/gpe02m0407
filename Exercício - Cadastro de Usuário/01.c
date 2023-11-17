#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1000

typedef struct{
    int id;
    char nome[20];
    char email[50];
    char sexo[12];
    char endereco[50];
    double altura;
    int vacina;
}Usuario;

void incluir(Usuario gen[], int indice){
    int check = 0, tamEntrada;
    char masc[10] = "Masculino", fem[9] = "Feminino", ind[12]="Indiferente";

    gen[indice].id = rand() % (TAM * 5);
    fflush(stdin);
    printf("Digite o nome do usuario: ");
    scanf("%s", gen[indice].nome);
    fflush(stdin);

    do{
        printf("Digite o e-mail do usuario: ");
        scanf("%s", gen[indice].email);
        fflush(stdin);
        tamEntrada = strlen(gen[indice].email);

        for(int i = 0; i < tamEntrada; i++){
            if(strchr(gen[indice].email, '@') != NULL){
                check = 1;
            }else{
                printf("O e-mail precisa incluir o character '@'.\n");
                break;
            }
        }
    }while(check == 0);

    do{
        check = 0;

        printf("Digite o sexo do usuario(Feminino, Masculino ou Indiferente): ");
        scanf("%s", gen[indice].sexo);
        fflush(stdin);
        tamEntrada = strlen(gen[indice].sexo);

        if((strcmp(gen[indice].sexo, fem)  == 0) || (strcmp(gen[indice].sexo, masc)  == 0) || (strcmp(gen[indice].sexo, ind)  == 0)){
            check = 1;
        }else{
            printf("Sexo digitado invalido.\n");
        }


    }while(check == 0);

    printf("Digite o endereco do usuario: ");
    scanf("%s", gen[indice].endereco);
    fflush(stdin);

    do{
        check = 0;

        printf("Digite a altura do usuario(Entre 1 e 2m): ");
        scanf("%lf", &gen[indice].altura);
        fflush(stdin);

        if(gen[indice].altura <= 2 && gen[indice].altura >= 1){
            check = 1;
        }else{
            printf("Altura invalida.\n");
        }

    }while(check == 0);

    do{
        check = 0;

        printf("O usuario e vacinado?(1 para sim, 0 para nao): ");
        scanf("%d", &gen[indice].vacina);
        fflush(stdin);

        if(gen[indice].vacina == 0 || gen[indice].vacina == 1){
            check = 1;
        }else{
            printf("Valor digitado invalido.\n");
        }
    }while(check == 0);
}

void editar(Usuario gen[], int usTotal, int idDigitado){
    int opcao;

    if(usTotal == 0){
        printf("Nao ha usuarios cadastrados.\n");
        return;
    }else{
        for(int i = 0 ; i < usTotal; i++){
            if(gen[i].id == idDigitado){
                printf("\nNome: %s \n", gen[i].nome);
                printf("E-mail: %s \n", gen[i].email);
                printf("Sexo: %s\n", gen[i].sexo);
                printf("Endereco: %s \n", gen[i].endereco);
                printf("Altura: %lf \n", gen[i].altura);
                printf("Vacina: %d \n", gen[i].vacina);

                printf("\nAlterar os dados: \n");
                
                fflush(stdin);
                printf("Digite 1 para alterar o nome\n");
                printf("Digite 2 para alterar o email\n");
                printf("Digite 3 para alterar o sexo\n");
                printf("Digite 4 para alterar o endereco\n");
                printf("Digite 5 para a altura\n");
                printf("Digite 6 para a vacina\n");
                printf("Digite 7 para alterar todas as opcoes\n");
                scanf("%d", &opcao);
                fflush(stdin);

                switch (opcao){
                    case 1: 
                        printf("Alteracao do nome: ");
                        scanf("%s", gen[i].nome);
                        fflush(stdin);
                    break;
                    case 2: 
                        printf("Alteracao do e-mail: ");
                        scanf("%s", gen[i].email);
                        fflush(stdin);
                    break;
                    case 3: 
                        printf("Alteracao do sexo: ");
                        scanf("%s", gen[i].sexo);
                        fflush(stdin);
                    break;
                    case 4: 
                        printf("Alteracao do endereco: ");
                        scanf("%s", gen[i].endereco);
                        fflush(stdin);
                    break;
                    case 5:
                        printf("Altercao da altura: ");
                        scanf("%lf", &gen[i].altura);
                        fflush(stdin);
                        break;
                    case 6:
                        printf("Altercao da vacina(1 para sim, 0 para nao): ");
                        scanf("%d", &gen[i].vacina);
                        fflush(stdin);
                        break;
                    case 7:
                        printf("Alteracao do nome: ");
                        scanf("%s", gen[i].nome);
                        fflush(stdin);
                        printf("Alteracao da idade: ");
                        scanf("%s", gen[i].email);
                        fflush(stdin);
                        printf("Alteracao do sexo: ");
                        scanf("%s", gen[i].sexo);
                        fflush(stdin);
                        printf("Alteracao do endereco: ");
                        scanf("%s", gen[i].endereco);
                        fflush(stdin);
                        printf("Alteracao da altura: ");
                        scanf("%lf", &gen[i].altura);
                        fflush(stdin);
                        printf("Alteracao da vacina: ");
                        scanf("%d", &gen[i].vacina);
                        fflush(stdin);
                }
            }
        }
    }
}

int excluir(Usuario gen[], int usTotal, int idDigitado){
    int usEx;
    for(int i = 0; i < usTotal; i++){
            if(gen[i].id == idDigitado){
                for(int j = i; j < usTotal - 1; j++ ){
                    gen[j] = gen[j + 1];
                }
                usEx = 1;
                printf("\nExcluido com sucesso");
                return usEx;
            }
        }
        usEx  = 0;
        return usEx;
}

void buscar(Usuario gen[], int usTotal, char emailDigitado[]){
    char email[50];
    strcpy(email, emailDigitado);

    if(usTotal == 0){
        printf("Nao existe cadastros na lista\n");
        return;
    }else{
        for(int i = 0; i < usTotal; i++){
            if(strcmp(email, gen[i].email) == 0){
                printf("Nome de registro encontrado!\n");
                printf("Nome: %s\n", gen[i].nome);
                printf("ID: %d\n", gen[i].id);
                return;
            }
        }
    }
    printf("Registro nao encontrado na lista\n");
}

void imprimir(Usuario gen[], int usTotal){
    if(usTotal == 0 ){
        printf("Nao existem alunos cadastrados.\n");
    }else{
        for(int i = 0; i < usTotal; i++ ){
            printf("\nId: %d\n", gen[i].id);
            printf("Nome: %s\n", gen[i].nome);
            printf("Email: %s\n", gen[i].email);
            printf("Sexo: %s\n", gen[i].sexo);
            printf("Endereco: %s\n", gen[i].endereco);
            printf("Altura: %.2lf\n", gen[i].altura);
            gen[i].vacina == 1 ? printf("Vacina : Sim") : printf("Vacina: Nao\n");
            printf("\n\n");
        }
    }
}

int main(){
    Usuario gen[TAM];
    char opcao, emailDigitado[50];
    int check = 0, usTotal = 0, idDigitado;

    do{
        printf("Digite 's' para sair do programa.\n");
        printf("Digite 'i' para incluir um usuario.\n");
        printf("Digite 'e' para editar um usuario.\n");
        printf("Digite 'd' para excluir um usuario.\n");
        printf("Digite 'b' para buscar um usuario pelo e-mail.\n");
        printf("Digite 'p' para imprimir todos os usuarios cadastrados.\n");
        scanf("%c", &opcao);
        fflush(stdin);

        switch (opcao)
        {
        case 's':
            printf("Fim do programa.\n");
            check = 1;
            break;
        case 'i':
            if(usTotal < TAM){
                incluir(gen, usTotal);
                usTotal++;
            }else{
                printf("Limite maximo de usuarios cadastrados atingidos.\n");
            }
            break;
        case 'e':
            printf("Digite o ID do usuario a ser editado: ");
            scanf("%d", &idDigitado);
            fflush(stdin);
            editar(gen, usTotal, idDigitado);
            break;
        case 'd':
            printf("Digite o ID do usuario para excluir: ");
                scanf("%d", &idDigitado);
                fflush(stdin);
                if(usTotal == 0){
                    printf("Lista vazia.\n");
                }else{
                    int res = excluir(gen, usTotal, idDigitado);
                    if(res == 1){
                        usTotal--;
                    }else{
                        printf("Não foi possivel excluir - aluno nao encontrado");
                    }
                }
 
            break;
        case 'b':
            printf("Digite o email do usuario que deseja buscar: ");
            scanf("%s", emailDigitado);
            fflush(stdin);
            buscar(gen, usTotal, emailDigitado);
            break;
        case 'p':
            imprimir(gen, usTotal);
            break;
        default:
            printf("Voce digitou outra\n");
            break;
        }

    }while(check == 0);

    return 0;
}