#include <stdio.h>
#include <stdlib.h>

#include "compromisso.h"
#include "agenda.h"

int main(){
    /*
    Compromisso *compromisso = (Compromisso*) malloc(sizeof(Compromisso));
    inicializaCompromisso(compromisso, 2, "22/02/2001", "12:21", "120", "Batata"  );
    imprimeCompromisso(compromisso);
    */

    Agenda *agenda = (Agenda*) malloc(sizeof(Agenda));
    criaAgenda(agenda, 1, "Agenda 01", 2020);
    for(int i = 0; i<20; i++) {
        if(i % 5 == 0)
            insereCompromisso(agenda, 5, "22/02/2001", "12:21", "120", "Batata");
        else if(i % 5 == 1)
            insereCompromisso(agenda, 4, "22/02/2001", "12:21", "120", "Batata");
        else if(i % 5 == 2)
            insereCompromisso(agenda, 3, "22/02/2001", "12:21", "120", "Batata");
        else if(i % 5 == 3)
            insereCompromisso(agenda, 2, "22/02/2001", "12:21", "120", "Batata");
        else if(i % 5 == 4)
            insereCompromisso(agenda, 1, "22/02/2001", "12:21", "120", "Batata");
    }
    imprimeAgenda(agenda);

    return 0;
}