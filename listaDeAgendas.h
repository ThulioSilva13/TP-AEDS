#ifndef TP01_LISTADEAGENDAS_H
#define TP01_LISTADEAGENDAS_H
#include "agenda.h"

typedef struct CelulaListaDeAgendas{
    Agenda *agenda;
    struct CelulaListaDeAgendas *prox;
}CelulaListaDeAgendas;

typedef struct ListaDeAgenda{
    CelulaListaDeAgendas *cabeca;
    CelulaListaDeAgendas *ultimo;
}ListaDeAgenda;


void insereAgenda(ListaDeAgenda *listaDeAgenda, Agenda *agenda);
void imprimeListaDeAgenda(ListaDeAgenda *listaDeAgenda);
void criaListaDeAgenda(ListaDeAgenda *listaDeAgenda);
CelulaListaDeAgendas verificaProfessor(ListaDeAgenda *listaDeAgenda, int idProfessor);
#endif //TP01_LISTADEAGENDAS_H
