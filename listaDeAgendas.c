#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"
#include "listaDeAgendas.h"

void insereAgenda(ListaDeAgenda *listaDeAgenda, Agenda *agenda){
    /*CelulaListaDeAgendas *posAdicionar = listaDeAgenda->cabeca;
    CelulaListaDeAgendas *nova = (CelulaListaDeAgendas*) malloc(sizeof(CelulaListaDeAgendas));
    nova->agenda = agenda;
    nova->prox = posAdicionar->prox;
    posAdicionar->prox = nova;*/
    listaDeAgenda->ultimo->prox = (CelulaListaDeAgendas*)malloc(sizeof(CelulaListaDeAgendas));
    listaDeAgenda->ultimo = listaDeAgenda->ultimo->prox;
    listaDeAgenda->ultimo->agenda = agenda;
    listaDeAgenda->ultimo->prox = NULL;
}

void imprimeListaDeAgenda(ListaDeAgenda *listaDeAgenda){
    printf("\n\nImprime lista de Agendas\n");
    CelulaListaDeAgendas *aux = listaDeAgenda->cabeca;
    int i = 1;
    while (aux->prox != NULL){
        aux = aux->prox;
        printf("Agenda %d \n", i++);
        imprimeAgenda(aux->agenda);
    }
}

void criaListaDeAgenda(ListaDeAgenda *listaDeAgenda){
    listaDeAgenda->cabeca = (CelulaListaDeAgendas*) malloc(sizeof(CelulaListaDeAgendas));
    listaDeAgenda->ultimo = listaDeAgenda->cabeca;
    listaDeAgenda->cabeca->prox = NULL;
}
