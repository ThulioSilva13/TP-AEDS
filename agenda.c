#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"
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
    agenda->idCompromissoAutoIncrement = 0;
}
//          [                ]
void insereCompromisso(Agenda* agenda, int prioridade, int dia, int mes, int ano, int hora, int minuto, int duracao, char descricao[100]){
    CelulaAgenda *posAdicionar = agenda->cabeca;
    while(posAdicionar->prox != NULL){
        if(prioridade > posAdicionar->prox->compromisso->prioridade)
          posAdicionar = posAdicionar->prox;
        else
            break;
    }
    Compromisso *comp = (Compromisso*)malloc(sizeof(Compromisso));
    inicializaCompromisso(comp, ++agenda->idCompromissoAutoIncrement, prioridade, dia, mes, ano, hora, minuto, duracao, descricao);
    CelulaAgenda *novo = (CelulaAgenda*) malloc(sizeof(CelulaAgenda));
    novo->compromisso = comp;
    novo->prox = posAdicionar->prox;
    posAdicionar->prox = novo;
    agenda->qtd++;
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
    printf("A quantidade de compromissos é: ");
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
     while (aux->prox != NULL){
         aux = aux->prox;
         if (aux->compromisso->dia == dia && aux->compromisso->mes == mes && aux->compromisso->ano == ano){
             imprimeCompromisso(aux->compromisso);
         }
     }
}