#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compromisso.h"

void inicializaCompromisso(Compromisso *comp, int idCompromisso, int prioridade,char data[11],char hora[6],int duracao,char descricao[100]){
    comp->idCompromisso = idCompromisso;
    comp->prioridade = prioridade;
    strcpy(comp->data, data);
    strcpy(comp->hora, hora);
    strcpy(comp->duracao, duracao);
    strcpy(comp->descricao, descricao);
}
void alteraprioridade(Compromisso *comp, int novaPri) {
    comp->prioridade = novaPri;
    printf("Alterado com Sucesso!!!");
}

int retornaprioridade(Compromisso *comp){
    return comp->prioridade;
}
void imprimeCompromisso(Compromisso *comp){
    printf("\tImprime Compromisso\n");
    printf("\t\tidCompromisso =  %d \n",comp->idCompromisso);
    printf("\t\tprioridade = %d \n",comp->prioridade);
    printf("\t\tdata = %s \n",&comp->data);
    /*printf("\t\thora = %s \n",&comp->hora);
    printf("\t\tDuracao = %s \n",&comp->duracao);
    printf("\t\tDescricao = %s \n",&comp->descricao);*/
}

int temConflito(Compromisso *comp1, Compromisso *comp2){
    int dezenaHora1 = atoi(comp1->hora[0]);
    int unidadeHora1= atoi(comp1->hora[1]);
    int dezenaMinuto1= atoi(comp1->hora[3]);
    int unidadeMinuto1= atoi(comp1->hora[4]);
    int dezenaHora2= atoi(comp2->hora[0]);
    int unidadeHora2= atoi(comp2->hora[1]);
    int dezenaMinuto2= atoi(comp2->hora[3]);
    int unidadeMinuto2= atoi(comp2->hora[4]);
    int inicio;
    int fim;
    
    if (!strcmp(comp1->data,comp2->data)){
        if (dezenaHora1==){

        }
    }
    else{
        printf("não há conflito");
    }
}
