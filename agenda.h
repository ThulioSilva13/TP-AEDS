#ifndef AGENDA_H_INCLUDED
#define AGENDA_H_INCLUDED
#include "compromisso.h"

typedef struct CelulaAgenda{
    Compromisso *compromisso;
    struct CelulaAgenda* prox;
}CelulaAgenda;

typedef struct Agenda{
    CelulaAgenda *cabeca;
    CelulaAgenda *ultimo;
    int idProfessor;
    char nomeProfessor[20];
    int ano;
    int qtd;
    int idCompromissoAutoIncrement;
}Agenda;

void criaAgenda(Agenda *agenda, int ID, char nome[20], int ano);
void recuperaAgenda(Agenda *agenda, int dia, int mes, int ano);
void insereCompromisso(Agenda* agenda, int prioridade, int dia, int mes, int ano, int hora, int minuto, int duracao, char descricao[100]);
void removeCompromisso(Agenda *agenda, int IDc);
void imprimeAgenda(Agenda *agenda);
void retornaNCompromissos(Agenda*agenda);

#endif // AGENDA_H_INCLUDED
