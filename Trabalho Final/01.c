#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct veiculo{
    char proprietario[30];
    char combustivel[10];
    char modelo[30];
    char cor[10];
    int chassi;
    int ano;
    char placaLetras[4];
    int placaNumero;
    struct veiculo *proximo;
}
veiculo;

// Função para alocar um novo espaço para o novo veiculo
veiculo *novoVeiculo()
{
    veiculo *novoVeiculo = (veiculo*) malloc(sizeof(veiculo));
    if(novoVeiculo == NULL)
    {
        printf("Erro de alocacao de memoria.\n");
        exit(EXIT_FAILURE);
    }

    return novoVeiculo;
}

// Função que adiciona um novo veiculo à lista
veiculo *addVeiculo(veiculo *lista)
{
    veiculo *addVeiculo = novoVeiculo();

    printf("\n");
    printf("Qual o nome do proprietario? ");
    fgets(addVeiculo->proprietario, 30, stdin);
    fflush(stdin);
    printf("Qual o combustivel do veiculo?(Alcool, diesel ou gasolina): ");
    scanf("%s", addVeiculo->combustivel);
    fflush(stdin);
    printf("Qual o modelo do veiculo? ");
    fgets(addVeiculo->modelo, 30, stdin);
    fflush(stdin);
    printf("Qual a cor do veiculo? ");
    fgets(addVeiculo->cor, 10, stdin);
    fflush(stdin);
    printf("Qual o numero do chassi? ");
    scanf("%d", &addVeiculo->chassi);
    fflush(stdin);
    printf("Qual o ano do veiculo? ");
    scanf("%d", &addVeiculo->ano);
    fflush(stdin);
    printf("Quais as tres letras da placa do veiculo? ");
    scanf("%s", addVeiculo->placaLetras);
    fflush(stdin);
    printf("Quais os quatro numeros da placa do veiculo? ");
    scanf("%d", &addVeiculo->placaNumero);
    fflush(stdin);
    addVeiculo->proximo = NULL;

    if(lista == NULL)
    {
        printf("Veiculo adicionado a lista!\n");
        return addVeiculo;
    }else
    {
        veiculo *ptr = lista;
        while(ptr->proximo != NULL)
        {
            ptr = ptr->proximo;
        }
        ptr->proximo = addVeiculo;

        printf("Veiculo adicionado a lista!\n");
        return lista;
    }

}

// Função que lista todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel
void anoDiesel(veiculo *lista)
{
    char diesel[7] = "diesel", diesel2[7] = "Diesel";

    for(veiculo *ptr = lista; ptr != NULL; ptr = ptr->proximo)
    {
        if(ptr->ano >= 2010)
        {
            if(strcmp(ptr->combustivel, diesel) == 0 || strcmp(ptr->combustivel, diesel2) == 0)
            {
                printf("Proprietario: %s", ptr->proprietario);
            }
        }
    }
}

// Função que lista todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários
void placaJota(veiculo *lista)
{
    for(veiculo *ptr = lista; ptr != NULL; ptr = ptr->proximo)
    {
        char placa[5];
        itoa(ptr->placaNumero, placa, 10);

        if(ptr->placaLetras[0] == 'j' || ptr->placaLetras[0] == 'J')
        {
            if(placa[3] == '0' || placa[3] == '2' || placa[3] == '4' || placa[3] == '7')
            {
                printf("\nProprietario: %s", ptr->proprietario);
                printf("Placa: %s-%d\n", ptr->placaLetras, ptr->placaNumero);
            }
        }
    }  
}

// Função que lista o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par
void placaVogal(veiculo *lista)
{
    for(veiculo *ptr = lista; ptr != NULL; ptr = ptr->proximo)
    {
        if(ptr->placaLetras[1] == 'a'|| ptr->placaLetras[1] == 'A'|| ptr->placaLetras[1] == 'e'|| ptr->placaLetras[1] == 'E'|| ptr->placaLetras[1] == 'i'|| ptr->placaLetras[1] == 'I'|| ptr->placaLetras[1] == 'o'|| ptr->placaLetras[1] == 'O'|| ptr->placaLetras[1] == 'u'|| ptr->placaLetras[1] == 'U')
        {
            int n = ptr->placaNumero;
            int soma = 0, digito;
            while(n > 0)
            {
                digito = n % 10;
                soma += digito;
                n = n / 10;
            }

            if(soma % 2 == 0)
            {
                printf("\nModelo: %s", ptr->modelo);
                printf("Cor: %s\n", ptr->cor);
            }
        }
    }
}


// Função sobre relatorios dos veiculos
void relatorio(veiculo *lista)
{
    int opcao;

    if(lista == NULL)
    {
        printf("Nenhum veiculo cadastrado.\n");
    }else{

        printf("\n");
        printf("0 - Retornar ao menu inicial\n");
        printf("1 - Listar todos os veiculos cadastrados\n");
        printf("2 - Listar todos os proprietarios cujos carros sao do ano de 2010 ou posterior e que sejam movidos a diesel\n");
        printf("3 - Listar todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietarios\n");
        printf("4 - Listar o modelo e a cor dos veiculos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numericos fornece um numero par\n");

        printf("\nDigite e opcao escolhida: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao)
        {
            case 0:
                return;
                break;
            case 1:
                for(veiculo *ptr = lista; ptr != NULL; ptr = ptr->proximo)
                {
                    printf("Proprietario: %s", ptr->proprietario);
                    printf("Combustivel usado: %s\n", ptr->combustivel);
                    printf("Modelo: %s", ptr->modelo);
                    printf("Cor: %s", ptr->cor);
                    printf("Numero do chassi: %d\n", ptr->chassi);
                    printf("Ano: %d\n", ptr->ano);
                    printf("Placa: %s-%d\n", ptr->placaLetras,ptr->placaNumero);
                    printf("\n");
                }
                break;
            case 2:
                anoDiesel(lista);
                break;
            case 3:
                placaJota(lista);
                break;
            case 4:
                placaVogal(lista);
                break;
        }
    }
}

// Funcao que busca o chassi do veiculo que se deseja alterar o proprietario e checa a placa
veiculo *buscarVeiculo(int idChassi, veiculo *lista)
{
    for(veiculo *ptr = lista; ptr != NULL; ptr = ptr->proximo)
    {
        if(ptr->chassi == idChassi)
        {
            char placa[5];
            itoa(ptr->placaNumero, placa, 10);
            for(int i = 0; i < 4; i++)
            {
                if(placa[i] == '0')
                {
                    printf("Nao permitida a troca de proprietario.\n");
                    return NULL;
                }
            }
            return ptr;
        }
    }
    printf("Chassi nao encontrado.\n");
    return NULL;
}

// Função que permite a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero
void trocaProp(veiculo *chassi)
{
    printf("Digite o nome do novo proprietario: ");
    fgets(chassi->proprietario, 30, stdin);
    fflush(stdin);
    printf("Proprietario alterado com sucesso!\n");
}

veiculo *removerVeiculo(int idChassi, veiculo *lista)
{
    if(lista == NULL)
    {
        printf("Nao ha veiculos cadastrados.\n");
    }else
    {
        veiculo *atual = lista;
        veiculo *anterior = lista;
        while(atual != NULL)
        {
            if(atual->chassi == idChassi)
            {
                //remover o primeiro item
                if(atual == lista){
                    anterior = atual->proximo;
                    free(atual);
                    printf("Veiculo excluido com sucesso!\n");
                    return anterior;
                }

                //remover qualquer item seguinte
                anterior->proximo = atual->proximo;
                free(atual);
                printf("Veiculo excluido com sucesso!\n");
                return lista;
            }

            anterior = atual;
            atual = atual->proximo;
        }
        
        printf("Veiculo inexistente ou nao cadastrado.\n");
    }
    return lista;
}

void liberar(veiculo *lista)
{
    veiculo *atual = lista;
    veiculo *prox;
    while(atual != NULL)
    {
        prox = atual->proximo;
        free(atual);
        atual = prox;
    }
}

int main(void){
    int opcao, idChassi;
    veiculo *lista = NULL;
    veiculo *encontrado;
    
    printf("#################################################################################\n");
    printf("#                                                                               #\n");
    printf("#                                                                               #\n");
    printf("#                            DEPARTAMENTO DE TRANSITO                           #\n");
    printf("#                                                                               #\n");
    printf("#                                                                               #\n");
    printf("#                            > Controle de Veiculos <                           #\n");
    printf("#                                                                               #\n");
    printf("#                                                    Secretaria dos Transportes #\n");
    printf("#################################################################################\n");

    do{
        printf("\n\n");
        printf("> MENU PRINCIPAL <\n");
        printf("0 - Sair do programa\n");
        printf("1 - Cadastrar veiculo\n");
        printf("2 - Relatorios disponiveis sobre os veiculos\n");
        printf("3 - Trocar o proprietario de determinado veiculo\n");
        printf("4 - Remover veiculo\n");
        printf("\nOpcao escolhida: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao)
        {
            case 1:
                lista = addVeiculo(lista);
                break;
            case 2:
                relatorio(lista);
                break;
            case 3:
                printf("Digite o numero de chassi do veiculo: ");
                scanf("%d", &idChassi);
                fflush(stdin);
                encontrado = buscarVeiculo(idChassi, lista);
                if(encontrado != NULL)
                {
                    trocaProp(encontrado);
                }
                break;
            case 4:
                printf("Digite o numero do chassi do veiculo que deseja remover: ");
                scanf("%d", &idChassi);
                fflush(stdin);
                lista = removerVeiculo(idChassi, lista);
                break;
        }

    }while(opcao != 0);


    liberar(lista);
    return 0;
}