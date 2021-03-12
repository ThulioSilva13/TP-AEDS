#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Compromisso.h"

void inicializaCompromisso(Compromisso *comp, int idCompromisso, int prioridade,int ano, int mes, int dia,,hora, minuto,int duracao,char descricao[100]){
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
    printf("\tidCompromisso =  %d \n",comp->idCompromisso);
    printf("\tprioridade = %d \n",comp->prioridade);
    printf("\tdata = %s \n",&comp->data);
    printf("\thora = %s \n",&comp->hora);
    printf("\tDuracao = %s \n",&comp->duracao);
    printf("\tDescricao = %s \n",&comp->descricao);
}
/*
 * 0-1
 * 3*4
 * 6-7-8-9
 */
int temConflito(Compromisso *comp1, Compromisso *comp2){
    if (!strcmp(comp1->data,comp2->data)){

    }else
        printf("não há conflito");

}