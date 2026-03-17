#include <stdio.h>
#include <string.h>

// Variáveis globais
char tarefas[5][100];
int totalTarefas = 0;

// Função para adicionar tarefa
void adicionarTarefa() {

    char novaTarefa[100]; // variável local

    if(totalTarefas >= 5){
        printf("\nLimite de tarefas atingido!\n");
        return;
    }

    printf("\nDigite a tarefa: ");
    scanf(" %[^\n]", novaTarefa);

    strcpy(tarefas[totalTarefas], novaTarefa);
    totalTarefas++;

    printf("Tarefa adicionada com sucesso!\n");
}

// Função para listar tarefas
void listarTarefas(){

    if(totalTarefas == 0){
        printf("\nNenhuma tarefa cadastrada.\n");
    }
    else{

        printf("\nLista de tarefas:\n");

        for(int i = 0; i < totalTarefas; i++){
            printf("%d - %s\n", i+1, tarefas[i]);
        }
    }
}

int main(){

    int opcao;
    int executando = 1;

    printf("Gerenciador de Tarefas em C \n");

    while(executando){

        printf("\nMenu:\n");
        printf("1 - Adicionar tarefa\n");
        printf("2 - Listar tarefas\n");
        printf("3 - Sair\n");

        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
                adicionarTarefa();
                break;

            case 2:
                listarTarefas();
                break;

            case 3:
                printf("\nEncerrando programa...\n");
                executando = 0;
                break;

            default:
                printf("\nOpção inválida!\n");
        }
    }

    return 0;
}
