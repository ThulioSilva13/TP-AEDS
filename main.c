#include <stdio.h>
#include <stdlib.h>

#include "compromisso.h"
#include "agenda.h"
#include "instituicao.h"
int main(){

    //Compromisso *compromisso = (Compromisso*) malloc(sizeof(Compromisso));



    //imprimeCompromisso(compromisso);

    Compromisso *comp1 = (Compromisso*) malloc(sizeof(Compromisso));
    Compromisso *comp2 = (Compromisso*) malloc(sizeof(Compromisso));
    Instituicao *instituicao = (Instituicao*) malloc(sizeof(Instituicao));
    Agenda *agenda = (Agenda*) malloc(sizeof(Agenda));
    criaAgenda(agenda, 1, "Agenda 01", 2020);
    for(int i = 0; i<10; i++) {
        if(i % 5 == 0)
            insereCompromisso(agenda, 5, 22, 02, 2001, 12, 30, 120, "Batata");
        else if(i % 5 == 1)
            insereCompromisso(agenda, 4, 22, 03, 2001, 12, 30, 120, "Batata");
        else if(i % 5 == 2)
            insereCompromisso(agenda, 3, 22, 04, 2001, 12, 30, 120, "Batata");
        else if(i % 5 == 3)
            insereCompromisso(agenda, 2, 22, 05, 2001, 12, 30, 120, "Batata");
        else if(i % 5 == 4)
            insereCompromisso(agenda, 1, 22, 06, 2001, 12, 30, 120, "Batata");
    }

    //removeCompromisso(agenda, 10);
    //imprimeAgenda(agenda);
    recuperaAgenda(agenda, 22, 02, 2001);
    //inicializaInstituicao(instituicao, "das", "dsada", "dasda");
    //imprimeInstituicao(instituicao);
    //inicializaCompromisso(comp1, 1, 2, 22, 02, 2021, 10, 40, 20, "batata");
    //inicializaCompromisso(comp2, 2, 3, 22, 02, 2021, 9, 00, 120, "batata");
    //temConflito(comp1,comp2);

    return 0;
}