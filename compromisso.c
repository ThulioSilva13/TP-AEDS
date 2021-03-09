#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compromisso.h"

void inicializaCompromisso(Compromisso *comp, int idCompromisso, int prioridade,char data[11],char hora[6],char duracao[4],char descricao[100]){
    comp->idCompromisso = idCompromisso;
    comp->prioridade = prioridade;
    strcpy(comp->data, data);
    strcpy(comp->hora, hora);
    strcpy(comp->duracao, duracao);
    strcpy(comp->descricao, descricao);
}
void alteraprioridade(Compromisso *comp, int novaPri) {
    comp->prioridade = novaPri;
}

int retornaprioridade(Compromisso *comp){
    return comp->prioridade;
}
void imprimeCompromisso(Compromisso *comp){
    printf("\tImprime Compromisso\n");
    printf("\t\tidCompromisso =  %d \n",comp->idCompromisso);
    printf("\t\tprioridade = %d \n",comp->prioridade);
    /*printf("\t\tdata = %s \n",&comp->data);
    printf("\t\thora = %s \n",&comp->hora);
    printf("\t\tDuracao = %s \n",&comp->duracao);
    printf("\t\tDescricao = %s \n",&comp->descricao);*/
}

int temConflito(){
    //if(comp1->data == comp2->data){
    //  if(hora[0]
}
