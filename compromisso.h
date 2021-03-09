#ifndef COMPROMISSO_H_INCLUDED
#define COMPROMISSO_H_INCLUDED

typedef struct{
    int idCompromisso;
    char data [11];
    char duracao [4];
    char descricao [100];
    char hora[6];
    int prioridade;
    /*struct Compromisso *prox;*/
}Compromisso;

void inicializaCompromisso(Compromisso *comp, int idCompromisso, int prioridade, char data[11], char hora[6], char duracao[4], char descricao[100]);
void alteraprioridade(Compromisso *comp, int novaPri);
int retornaprioridade(Compromisso *comp);
/*int temConflito();*/
void imprimeCompromisso(Compromisso *comp);

#endif // COMPROMISSO_H_INCLUDED
