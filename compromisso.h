#ifndef COMPROMISSO_H_INCLUDED
#define COMPROMISSO_H_INCLUDED

typedef struct Compromisso{
    int idCompromisso;
    int ano;
    int mes;
    int dia;
    int hora;
    int minuto;
    int duracao;
    char descricao [100];
    int prioridade;
    /*struct Compromisso *prox;*/
}Compromisso;

void inicializaCompromisso(Compromisso *comp, int idCompromisso, int prioridade, int dia, int mes, int ano, int hora, int minuto, int duracao, char descricao[100]);
int alteraprioridade(Compromisso *comp, int novaPri);
int retornaprioridade(Compromisso *comp);
void temConflito(Compromisso *comp1, Compromisso *comp2);
void imprimeCompromisso(Compromisso *comp);

#endif // COMPROMISSO_H_INCLUDED
