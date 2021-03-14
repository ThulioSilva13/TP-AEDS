#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "compromisso.h"

void inicializaCompromisso(Compromisso *comp, int idCompromisso, int prioridade,int dia, int mes, int ano, int hora, int minuto, int duracao, char descricao[100]){
    comp->idCompromisso = idCompromisso;
    comp->prioridade = prioridade;
    comp->dia = dia;
    comp->mes = mes;
    comp->ano = ano;
    comp->hora = hora;
    comp->minuto = minuto;
    comp->duracao = duracao;
    strcpy(comp->descricao, descricao);
}
int alteraprioridade(Compromisso *comp,  int novaPri) {
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
    printf("\t\tdata = %d/%d/%d \n",comp->dia,comp->mes,comp->ano);
    printf("\t\thora = %d:%d \n",comp->hora,comp->minuto);
    printf("\t\tDuracao = %d \n",comp->duracao);
    printf("\t\tDescricao = %s \n",&comp->descricao);
}

void temConflito(Compromisso *comp1, Compromisso *comp2){
    int inicio1 = comp1->hora*60 + comp1->minuto;
    int inicio2 = comp2->hora*60 + comp2->minuto;
    int fim1 = inicio1 + comp1->duracao;
    int fim2 = inicio2 + comp2->duracao;
    if (comp1->dia == comp2->dia && comp1->mes == comp2->mes && comp1->ano == comp2->ano){
        if((inicio1 < inicio2 && inicio2 < fim1) || (inicio2 < inicio1 && inicio1 <fim2) || inicio1==inicio2){
            printf("\nha conflito\n");
        } else{

            printf("\nnao ha conflito\n");
        }
    }
    else{

        printf("\nnao ha conflito\n");
    }
}