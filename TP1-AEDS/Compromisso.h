#ifndef COMPROMISSO_H_INCLUDED
#define COMPROMISSO_H_INCLUDED

typedef struct{
    int idCompromisso;
    char data [11];
    int duracao;
    char descricao [100];
    hora, minuto;
    int prioridade;
}Compromisso;

void inicializaCompromisso(Compromisso *comp, int idCompromisso, int prioridade, int ano, int mes, int dia,, hora, minuto, int duracao, char descricao[100]);
void alteraprioridade(Compromisso *comp, int novaPri);
int retornaprioridade(Compromisso *comp);
int temConflito(Compromisso *comp1, Compromisso *comp2);
void imprimeCompromisso(Compromisso *comp);

#endif // COMPROMISSO_H_INCLUDED