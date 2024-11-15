#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define FILENAME "CadastroDeCliente.csv"
#define TEMP_FILENAME "TempCadastro.csv"

typedef struct {
    int codCliente;
    char Nome[30];
    char Telefone[15];
    char endereco[50];
    char estado[50];
    char CPF[20];
    char RG[20];
} Cliente;

void addCliente();
void visuCliente();
void delCliente();
void updateCliente();

int main() {
    setlocale(LC_ALL, "portuguese");
    int opcao;
    do {
        printf("\nCadastro de Clientes\n");
        printf("1)- Adicionar Clientes\n");
        printf("2)- Visualizar Clientes\n");
        printf("3)- Deletar Cliente\n");
        printf("4)- Atualizar Cliente\n");
        printf("5)- Encerrar Programa\n");
        printf("Escolha uma opção: ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("Erro, entrada inválida. Tente novamente.\n");
            while (getchar() != '\n');
            continue;
        }
//Linha 41 a 80 - Tiago
        switch(opcao) {
            case 1:
                addCliente();
                break;
            case 2:
                visuCliente();
                break;
            case 3:
                delCliente();
                break;
            case 4:
                updateCliente();
                break;
            case 5:
                printf("Programa fechado!\n");
                break;
            default:
                printf("Erro, tente novamente com uma opção válida.\n");
        }
    } while(opcao != 5);

    return 0;
}

void addCliente() {
    FILE *arquivo = fopen(FILENAME, "a");
    if (!arquivo) {
        printf("Não foi possível abrir o arquivo.\n");
        return;
    }

    Cliente cliente;
    printf("\nCódigo do cliente: ");
    if (scanf("%d", &cliente.codCliente) != 1) {
        printf("Erro ao inserir o código do cliente.\n");
        fclose(arquivo);
        while (getchar() != '\n');
        return;
    }
//Linha 81 a 120 - Eduardo
    printf("Nome: ");
    scanf(" %[^\n]", cliente.Nome);
    printf("Telefone: ");
    scanf(" %[^\n]", cliente.Telefone);
    printf("Endereço: ");
    scanf(" %[^\n]", cliente.endereco);
    printf("Estado: ");
    scanf(" %[^\n]", cliente.estado);
    printf("CPF: ");
    scanf(" %[^\n]", cliente.CPF);
    printf("RG: ");
    scanf(" %[^\n]", cliente.RG);

    fprintf(arquivo, "%d,%s,%s,%s,%s,%s,%s\n", cliente.codCliente, cliente.Nome, cliente.Telefone, cliente.endereco, cliente.estado, cliente.CPF, cliente.RG);
    fclose(arquivo);

    printf("Cliente cadastrado com sucesso!\n");
}

void visuCliente() {
    FILE *arquivo = fopen(FILENAME, "r");
    if (!arquivo) {
        printf("Não foi possível abrir o arquivo.\n");
        return;
    }

    Cliente cliente;
    int hasData = 0;
    printf("\nLista de clientes cadastrados:\n");
    printf("Código | Nome | Telefone | Endereço | Estado | CPF | RG\n");
    while (fscanf(arquivo, "%d,%29[^,],%14[^,],%49[^,],%49[^,],%19[^,],%19[^\n]\n", &cliente.codCliente, cliente.Nome, cliente.Telefone, cliente.endereco, cliente.estado, cliente.CPF, cliente.RG) != EOF) {
        printf("%d | %s | %s | %s | %s | %s | %s\n", cliente.codCliente, cliente.Nome, cliente.Telefone, cliente.endereco, cliente.estado, cliente.CPF, cliente.RG);
        hasData = 1;
    }
    if (!hasData) {
        printf("Nenhum cliente cadastrado.\n");
    }
    fclose(arquivo);
}
//Linha 121 a 160 Carlos
void delCliente() {
    int codigo;
    printf("\nDigite o código do cliente a ser deletado: ");
    if (scanf("%d", &codigo) != 1) {
        printf("Código inválido.\n");
        while (getchar() != '\n');
        return;
    }

    FILE *arquivo = fopen(FILENAME, "r");
    FILE *temp = fopen(TEMP_FILENAME, "w");
    if (!arquivo || !temp) {
        printf("Não foi possível abrir o arquivo.\n");
        return;
    }

    Cliente cliente;
    int found = 0;
    while (fscanf(arquivo, "%d,%29[^,],%14[^,],%49[^,],%49[^,],%19[^,],%19[^\n]\n", &cliente.codCliente, cliente.Nome, cliente.Telefone, cliente.endereco, cliente.estado, cliente.CPF, cliente.RG) != EOF) {
        if (cliente.codCliente != codigo) {
            fprintf(temp, "%d,%s,%s,%s,%s,%s,%s\n", cliente.codCliente, cliente.Nome, cliente.Telefone, cliente.endereco, cliente.estado, cliente.CPF, cliente.RG);
        } else {
            found = 1;
        }
    }
    fclose(arquivo);
    fclose(temp);

    if (found) {
        remove(FILENAME);
        rename(TEMP_FILENAME, FILENAME);
        printf("Cliente deletado com sucesso!\n");
    } else {
        remove(TEMP_FILENAME);
        printf("Cliente não encontrado.\n");
    }
}


//Linha 161 em diante - Diogo
void updateCliente() {
    int codigo;
    printf("\nDigite o código do cliente a ser atualizado: ");
    if (scanf("%d", &codigo) != 1) {
        printf("Código inválido.\n");
        while (getchar() != '\n');
        return;
    }

    FILE *arquivo = fopen(FILENAME, "r");
    FILE *temp = fopen(TEMP_FILENAME, "w");
    if (!arquivo || !temp) {
        printf("Não foi possível abrir o arquivo.\n");
        return;
    }
    Cliente cliente;
    int found = 0;
    while (fscanf(arquivo, "%d,%29[^,],%14[^,],%49[^,],%49[^,],%19[^,],%19[^\n]\n", &cliente.codCliente, cliente.Nome, cliente.Telefone, cliente.endereco, cliente.estado, cliente.CPF, cliente.RG) != EOF) {
        if (cliente.codCliente == codigo) {
            found = 1;
            printf("Novo nome: ");
            scanf(" %[^\n]", cliente.Nome);
            printf("Novo telefone: ");
            scanf(" %[^\n]", cliente.Telefone);
            printf("Novo Endereço: ");
            scanf(" %[^\n]", cliente.endereco);
            printf("Novo Estado: ");
            scanf(" %[^\n]", cliente.estado);
            printf("Novo CPF: ");
            scanf(" %[^\n]", cliente.CPF);
            printf("Novo RG: ");
            scanf(" %[^\n]", cliente.RG);
        }
        fprintf(temp, "%d,%s,%s,%s,%s,%s,%s\n", cliente.codCliente, cliente.Nome, cliente.Telefone, cliente.endereco, cliente.estado, cliente.CPF, cliente.RG);
    }
    fclose(arquivo);
    fclose(temp);
    if (found) {
        remove(FILENAME);
        rename(TEMP_FILENAME, FILENAME);
        printf("Cliente atualizado com sucesso!\n");
    } else {
        remove(TEMP_FILENAME);
        printf("Cliente não encontrado.\n");
    }
}


