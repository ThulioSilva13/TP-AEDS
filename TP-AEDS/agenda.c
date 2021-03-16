#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"
#include "listaDeAgendas.h"
#include "compromisso.h"
//
void criaAgenda(Agenda *agenda, int ID, char nome[20], int ano){
    agenda->cabeca = (CelulaAgenda*)malloc(sizeof(CelulaAgenda));
    agenda->ultimo = agenda->cabeca;
    agenda->cabeca->prox = NULL;
    agenda->idProfessor = ID;
    strcpy(agenda->nomeProfessor, nome);
    agenda->ano = ano;
    agenda->qtd = 0;
}
void insereCompromisso(Agenda* agenda, int idCompromisso, int prioridade, int dia, int mes, int ano, int hora, int minuto, int duracao, char descricao[100]){
    printf("Quantidade no inciio do insere = %d\n", agenda->qtd);
    CelulaAgenda *posAdicionar = agenda->cabeca;

    while(posAdicionar->prox != NULL) {
        if(prioridade > posAdicionar->prox->compromisso->prioridade) {
            posAdicionar = posAdicionar->prox;
        }
        else {
            break;
        }
    }
    printf("Quantidade antes de alocar = %d\n", agenda->qtd);
    Compromisso *comp = (Compromisso*)malloc(sizeof(Compromisso));
    printf("Quantidade antes de INICIALIZAR = %d\n", agenda->qtd);
    inicializaCompromisso(comp, idCompromisso, prioridade, dia, mes, ano, hora, minuto, duracao, descricao);
    printf("Quantidade antes de criar uma celula nova = %d\n", agenda->qtd);
    CelulaAgenda *novo = (CelulaAgenda*) malloc(sizeof(CelulaAgenda));
    printf("Quantidade antes de compromisso receber comp = %d\n", agenda->qtd);
    novo->compromisso = comp;
    printf("Quantidade antes de posAdicionar -> prox = %d\n", agenda->qtd);
    novo->prox = posAdicionar->prox;
    printf("Quantidade antes de prox novo = %d\n", agenda->qtd);
    posAdicionar->prox = novo;
    printf("Quantidade antes do final = %d\n", agenda->qtd);
    agenda->qtd++;
    printf("Quantidade no final = %d\n", agenda->qtd);

    //temConflito(comp, novo);
}

void imprimeAgenda(Agenda *agenda){
    printf("\n\nImprime agenda\n");
    printf("Qtd: %d\n", agenda->qtd);
    CelulaAgenda *aux = agenda->cabeca;
    int i = 1;
    while(aux->prox != NULL){
        aux = aux->prox;
        printf("Compromisso %d \n",i++);
        imprimeCompromisso(aux->compromisso);
    }
}

void retornaNCompromissos(Agenda *agenda){
    printf("A quantidade de compromissos eh: ");
    printf("%d",agenda->qtd);
}

void removeCompromisso(Agenda *agenda, int IDc){
    if (!IDc){
        printf("Lista está vazia");
    }
    else{
        CelulaAgenda *aux = agenda->cabeca;
        CelulaAgenda *antes = agenda->cabeca;
        while (aux->prox != NULL){
            aux = aux->prox;
            if (aux->compromisso->idCompromisso == IDc){
                antes->prox = aux->prox;
                free(aux);
                agenda->qtd--;
                break;
            }else{
                antes = aux;
            }
        }
    }
}

void recuperaAgenda(Agenda *agenda, int dia, int mes, int ano){
    CelulaAgenda *aux = agenda->cabeca;
    int quantidadeApos;
    while (aux->prox != NULL){
        aux = aux->prox;
        if (ano > aux->compromisso->ano){
            quantidadeApos++;
        }
        else if(mes > aux->compromisso->mes){
            quantidadeApos++;
        }
        else if(dia > aux->compromisso->dia) {
            quantidadeApos++;
        }
    }
    printf("%s", agenda->nomeProfessor);
    printf("%d", agenda->ano);
    printf("%d", quantidadeApos);
}

CelulaAgenda localizaCompromisso(Agenda*agenda, int IDCompromisso){
    CelulaAgenda *aux = agenda->cabeca;
    while (aux->prox != NULL){
        aux = aux->prox;
        if(aux->compromisso->idCompromisso == IDCompromisso){
            return *aux;
        }
    }
}