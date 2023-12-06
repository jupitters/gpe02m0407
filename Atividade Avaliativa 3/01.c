#include <stdio.h>
#include <stdlib.h>
#define TAM_DES 50

typedef struct produto
{
    int codigo;
    char descricao[TAM_DES];
    int quantidade;
    float valor;
    struct produto *proximo;
}
produto;

// Função que inicializa uma lista vazia
produto *estoqueVazio()
{
    return NULL;
}

// Função para alocar um novo espaço para o novo produto
produto *novoProduto()
{
    produto *novoProduto = (produto*) malloc(sizeof(produto));
    if(novoProduto == NULL)
    {
        printf("Erro de alocacao de memoria.\n");
        exit(EXIT_FAILURE);
    }

    return novoProduto;
}

// Função que adiciona um novo produto à lista de estoque
produto *addProduto(produto *estoque)
{
    produto *addProduto = novoProduto();
    printf("Digite o codigo do produto: ");
    scanf("%d", &addProduto->codigo);
    fflush(stdin);
    printf("Breve descricao do produto: ");
    fgets(addProduto->descricao, TAM_DES, stdin);
    fflush(stdin);
    printf("Digite a quantidade desse produto: ");
    scanf("%d", &addProduto->quantidade);
    fflush(stdin);
    printf("Digite o valor do produto: ");
    scanf("%f", &addProduto->valor);
    fflush(stdin);
    addProduto->proximo = NULL;

    if(estoque == NULL)
    {    
        printf("Produto cadastrado com sucesso!\n");
        return addProduto;
    }else
    {
        produto *temp = estoque;
        while(temp->proximo != NULL) 
        {
            temp = temp->proximo;
        }
        temp->proximo = addProduto;

        printf("Produto cadastrado com sucesso!\n");
        return estoque;
    }
    
}

// Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto
void relatorio(produto *estoque)
{
    if(estoque == NULL)
    {
        printf("Estoque vazio.\n");
    }
    for(produto *temp = estoque; temp != NULL; temp = temp->proximo)
    {
        printf("\n");
        printf("Codigo: %d\n", temp->codigo);
        printf("Descricao: %s", temp->descricao);
        printf("Quantidade: %d\n", temp->quantidade);
        printf("Valor: %.2f\n", temp->valor);
    }
}

// Função que permite ao usuário pesquisar um produto pelo código
void pesquisa(int idCodigo, produto *estoque)
{
    if(estoque == NULL)
    {
        printf("Estoque vazio.\n");
    }else
    {
        for(produto *temp = estoque; temp != NULL; temp = temp->proximo)
        {
            if(temp->codigo == idCodigo)
            {
                printf("\n");
                printf("Descricao: %s", temp->descricao);
                printf("Quantidade: %d\n", temp->quantidade);
                printf("Valor: %.2f\n", temp->valor);
                return;
            }
        }
        
        printf("Produto inexistente no estoque.\n");
    }
}

// Função que permite ao usuário remover um produto do estoque.
produto *removerProduto(int idCodigo, produto *estoque)
{
    if(estoque == NULL)
    {
        printf("Estoque vazio.\n");
    }else
    {
        produto *atual = estoque;
        produto *anterior = estoque;
        while(atual != NULL)
        {
            if(atual->codigo == idCodigo)
            {
                //remover o primeiro item
                if(atual == estoque){
                    anterior = atual->proximo;
                    free(atual);
                    printf("Produto excluido com sucesso!\n");
                    return anterior;
                }

                //remover qualquer item seguinte
                anterior->proximo = atual->proximo;
                free(atual);
                printf("Produto excluido com sucesso!\n");
                return estoque;
            }

            anterior = atual;
            atual = atual->proximo;
        }
        
        printf("Produto inexistente no estoque.\n");
    }
    return estoque;
}

void liberar(produto *estoque)
{
    produto *temp;
    for(produto *ptr = estoque; ptr != NULL; ptr = ptr->proximo)
    {
        temp = ptr->proximo;
        free(ptr);
        ptr = temp;
    }
}

int main(void){
    produto *estoque1 = estoqueVazio();
    int opcao, idCodigo;

    printf("#################################################################\n");
    printf("#                                                               #\n");
    printf("#                            CONTROLE                           #\n");
    printf("#                               DE                              #\n");
    printf("#                            ESTOQUES                           #\n");
    printf("#                                                               #\n");
    printf("#################################################################\n");

    do{
        printf("\n");
        printf("0 - Sair do programa\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Relatorio geral dos produtos\n");
        printf("3 - Consultar produto por codigo\n");
        printf("4 - Remover um produto por produto\n");
        printf("\nOpcao escolhida: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao)
        {
            case 1:
                estoque1 = addProduto(estoque1);
                break;
            case 2:
                relatorio(estoque1);
                break;
            case 3:
                printf("Digite o codigo do produto a ser pesquisado: ");
                scanf("%d", &idCodigo);
                fflush(stdin);
                pesquisa(idCodigo, estoque1);
                break;
            case 4:
                printf("Digite o codigo do produto a ser excluido: ");
                scanf("%d", &idCodigo);
                fflush(stdin);
                estoque1 = removerProduto(idCodigo, estoque1);
                break;
        }

    }while(opcao != 0);


    liberar(estoque1);
    return 0;
}