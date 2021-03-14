#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"
#include "agenda.h"
#include "instituicao.h"
#include "listaDeAgendas.h"
int main(){

    Compromisso *compromisso = (Compromisso*) malloc(sizeof(Compromisso));
    Instituicao *instituicao = (Instituicao*) malloc(sizeof(Instituicao));
    Agenda *agenda1 = (Agenda*) malloc(sizeof(Agenda));
    Agenda *agenda2 = (Agenda*) malloc(sizeof(Agenda));
    Agenda *agenda3 = (Agenda*) malloc(sizeof(Agenda));
    Agenda *agenda4 = (Agenda*) malloc(sizeof(Agenda));
    Agenda *agenda5 = (Agenda*) malloc(sizeof(Agenda));
    criaAgenda(agenda1, 1, "asad", 2021);
    criaAgenda(agenda2, 2, "asad", 2021);
    criaAgenda(agenda3, 3, "asad", 2021);
    criaAgenda(agenda4, 4, "asad", 2021);
    criaAgenda(agenda5, 5, "asad", 2021);
    ListaDeAgenda *listaDeAgenda = (ListaDeAgenda*) malloc(sizeof(ListaDeAgenda));
    criaListaDeAgenda(listaDeAgenda);
    for(int i = 0; i<20; i++) {
        if(i % 5 == 0)
            insereCompromisso(agenda1, 5, 22, 02, 2001, 12, 30, 120, "Batata");
        else if(i % 5 == 1)
            insereCompromisso(agenda2, 4, 22, 03, 2001, 12, 30, 120, "Batata");
        else if(i % 5 == 2)
            insereCompromisso(agenda3, 3, 22, 04, 2001, 12, 30, 120, "Batata");
        else if(i % 5 == 3)
            insereCompromisso(agenda4, 2, 22, 05, 2001, 12, 30, 120, "Batata");
        else if(i % 5 == 4)
            insereCompromisso(agenda5, 1, 22, 06, 2001, 12, 30, 120, "Batata");
    }
    insereAgenda(listaDeAgenda, agenda1);
    insereAgenda(listaDeAgenda, agenda2);
    insereAgenda(listaDeAgenda, agenda3);
    insereAgenda(listaDeAgenda, agenda4);
    insereAgenda(listaDeAgenda, agenda5);
    /*for(int j = 0; j < 5; j++) {
        if (j % 5 == 0)
            insereAgenda(listaDeAgenda,agenda);
        else if (j % 5 == 1)
            insereAgenda(listaDeAgenda, agenda);
        else if (j % 5 == 2)
            insereAgenda(listaDeAgenda, agenda);
        else if (j % 5 == 3)
            insereAgenda(listaDeAgenda, agenda);
        else if (j % 5 == 4)
            insereAgenda(listaDeAgenda, agenda);
    }    */

    //recuperaAgenda(agenda, 22, 02, 2001);
    //inicializaInstituicao(instituicao, "das", "dsada", "dasda");
    //imprimeInstituicao(instituicao);
    //inicializaCompromisso(comp1, 1, 2, 22, 02, 2021, 10, 40, 20, "batata");
    //inicializaCompromisso(comp2, 2, 3, 22, 02, 2021, 9, 00, 120, "batata");
    //temConflito(comp1,comp2);
    //insereAgenda(listaDeAgenda, 1, "nome",  2021);
    imprimeListaDeAgenda(listaDeAgenda);
    //imprimeAgenda(agenda);
    return 0;
}