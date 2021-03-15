#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"
#include "agenda.h"
#include "instituicao.h"
#include "listaDeAgendas.h"

int main(){

    char nomeprofessor[20]; char descricao[100]; char nomeInstituicao[20]; char Especialidade[20]; char Tipo[20];
    int ano; int ID; int escolha; int opcao; int idProfessorPreterido;
    int prioridade, dia, mes, hora, minuto, duracao; int idCompromisso; int idcompdesejado;
    int novaPrioridade;
    int ID1; int ID2;


    Compromisso *compromisso = (Compromisso*) malloc(sizeof(Compromisso));
    Instituicao *instituicao = (Instituicao*) malloc(sizeof(Instituicao));
    ListaDeAgenda *listaDeAgenda = (ListaDeAgenda*) malloc(sizeof(ListaDeAgenda));
    criaListaDeAgenda(listaDeAgenda);



    while (opcao != 5){
        printf("\tMenu Principal\n\n");
        printf("================\n");
        printf("Criar agenda [1]\n");
        printf("Ler arquivo [2]\n");
        printf("Login [3]\n");
        printf("Imprimir lista [4]\n");
        printf("Sair [5] \n");
        printf("================\n");
        printf("Digite seu ID: \n");
        scanf("%d", &idProfessorPreterido);

        printf("Digite o opcao desejada:\n");
        scanf("%d", &opcao);
        //switch (opcao) {
            Agenda *agenda;
            if (opcao == 1) { //ok
                agenda = (Agenda *) malloc(sizeof(Agenda));

                printf("Digite o nome:\n");
                scanf("%s", nomeprofessor);
                printf("Digite o ano:\n");
                scanf("%d", &ano);
                criaAgenda(agenda, idProfessorPreterido, nomeprofessor, ano);
                insereAgenda(listaDeAgenda, agenda);
            }
            /*case (2):
                /*ler arquivo*/
            if (opcao == 3) {
                    printf("digite o ID: \n");

                    scanf("%d", &ID);
                    CelulaListaDeAgendas aux;
                    aux = login(listaDeAgenda, ID);

                    printf("\n\nSISTEMA DE GERENCIAMENTO DE TEMPO\n\n");
                    printf("\tInserir compromisso [1]\n");
                    printf("\tRemover compromisso [2]\n");
                    printf("\tAlterar prioridade [3]\n");
                    printf("\tVer um compromisso [4]\n");
                    printf("\tRecuperar data [5]\n");
                    printf("\tRetornar numero de compromissos [6]\n");
                    printf("\tImprimir agenda [7]\n");
                    printf("\tInicializar instituicao [8]\n");
                    printf("\tImprimir instituicao [9]\n");
                    printf("\tVerificar se ha conflito [10]\n");
                    printf("\tVoltar ao menu principal [0]\n");
                    scanf("%d", &escolha);


                    /*switch (escolha) {
                        case(1):*/
                    //digitar o id
                    if (escolha == 1) {
                        printf("\tInsere compromisso\n\n");
                        printf("insere prioridade: ");
                        scanf("%d", &prioridade);
                        printf("insere dia: ");
                        scanf("%d", &dia);
                        printf("insere mes: ");
                        scanf("%d", &mes);
                        printf("insere ano: ");
                        scanf("%d", &ano);
                        printf("insere hora: ");
                        scanf("%d", &hora);
                        printf("insere minuto: ");
                        scanf("%d", &minuto);
                        printf("insere duracao: ");
                        scanf("%d", &duracao);
                        printf("insere descricao: ");
                        scanf("%s", descricao);
                        insereCompromisso(&aux, prioridade, dia, mes, ano, hora, minuto, duracao, descricao);
                    }


                    if (escolha == 2) {
                        //como saber o id
                        printf("\tRemove compromisso\n\n");
                        printf("Digite o id do compromisso que deseja excluir\n");
                        scanf("%d", &idCompromisso);
                        removeCompromisso(&aux, idCompromisso);
                    }
                    if (escolha == 3) {
                        printf("\tAltera compromisso\n\n");
                        printf("Digite a nova prioridade do compromisso\n ");
                        scanf("%d", &novaPrioridade);
                        alteraprioridade(&aux, novaPrioridade);
                    }
                    if (escolha == 4) {
                        printf("\tVer um compromisso\n");
                        printf("digite o ID do compromisso desejado\n");
                        scanf("%d", &idcompdesejado);
                        CelulaAgenda aux2;
                        aux2 = localizaCompromisso(&aux, idcompdesejado);
                        imprimeCompromisso(&aux2);
                    }
                    if (escolha == 5) {
                        printf("\tRecuperar data \n");
                        printf("digite o dia preterido\n");
                        scanf("%d", &dia);
                        printf("digite o mes preterido\n");
                        scanf("%d", &mes);
                        printf("digite o ano preterido\n");
                        scanf("%d", &ano);
                        recuperaAgenda(&aux, dia, mes, ano);
                    }
                    if (escolha == 6) {
                        printf("\tRetornar numero de compromissos \n");
                        retornaNCompromissos(&aux);
                    }
                    if (escolha == 7) {
                        printf("\tImprimir agenda \n");
                        imprimeAgenda(&aux);
                    }
                    if (escolha == 8) {
                        printf("\tInicializar instituicao \n");
                        printf("Digite o nome da instituicao:\n");
                        scanf("%s", nomeInstituicao);
                        printf("Digite a especialidade da instituicao:\n");
                        scanf("%s", Especialidade);
                        printf("Digite o tipo da instituicao:\n");
                        scanf("%s", Tipo);
                        inicializaInstituicao(instituicao, nomeInstituicao, Especialidade, Tipo);
                        printf("inicializou");
                    }
                    if (escolha == 9) {
                        printf("\tImprimir instituicao \n");
                        imprimeInstituicao(instituicao);
                    }
                    if (escolha == 10) {
                        printf("\tVerificar se há conflito \n");
                        printf("digite o id dos compromissor que deseja verificar\n");
                        scanf("%d", &ID1);
                        scanf("%d", &ID2);
                        CelulaAgenda aux3;
                        CelulaAgenda aux4;
                        aux3 = localizaCompromisso(&aux, ID1);
                        aux4 = localizaCompromisso(&aux4, ID2);
                        temConflito(&aux3, &aux4);
                    }
                    if (escolha == 0) {
                        break;
                    }

            }

            if (opcao == 4){
                imprimeListaDeAgenda(listaDeAgenda);
            }
        /*printf("digite novamente a opcao desejada\n");
        printf("Criar agenda [1]\n");
        printf("ler arquivo [2]\n");
        printf("login [3]\n");
        printf("imprimir lista [4]\n");
        printf("sair  [5] \n");
        scanf("%d", &opcao);*/
    }



 /*   if (temLogin == 0) {

    }
    else{
        int escolha;
        printf("\n\nSISTEMA DE GERENCIAMENTO DE TEMPO\n\n");
        printf("\tInserir compromisso [1]\n");
        printf("\tRemover compromisso [2]\n");
        printf("\tAlterar prioridade [3]\n");
        printf("\tVer um compromisso [4]\n");
        printf("\tRecuperar data [5]\n");
        printf("\tRetornar numero de compromissos [6]\n");
        printf("\tImprimir agenda [7]\n");
        printf("\tImprimir compromisso [8]\n");
        printf("\tInicializar instituicao [9]\n");
        printf("\tImprimir instituicao [10]\n");
        printf("\tVerificar se há conflito [11]\n");
        scanf("%d",escolha);
        switch (escolha) {
            case (1):
                printf("\tInsere compromisso\n\n");
                int prioridade, dia, mes, ano, hora, minuto,duracao;
                char descricao[100];
                printf("insere prioridade: ");
                scanf("%d", prioridade);
                printf("insere dia: ");
                scanf("%d", dia);
                printf("insere mes: ");
                scanf("%d", mes);
                printf("insere ano: ");
                scanf("%d", ano);
                printf("insere hora: ");
                scanf("%d", hora);
                printf("insere minuto: ");
                scanf("%d", minuto);
                printf("insere duracao: ");
                scanf("%d", duracao);
                printf("insere descricao: ");
                scanf("%s", descricao);
                insereCompromisso(/*agenda prioridade, dia, mes, ano, hora, minuto, duracao, descricao);

           /* case (2):
                printf("\tRemove compromisso\n\n");
                int idCompromisso;
                printf("Digite o id do compromisso que deseja excluir\n");
                scanf("%d",idCompromisso);
                removeCompromisso(idCompromisso);

            case (3):
                printf("\tAltera compromisso\n\n");
                int novaPrioridade;
                printf("Digite a nova prioridade do compromisso\n ");
                scanf("%d", novaPrioridade);
                alteraprioridade(/*agenda novaPrioridade);
           /* case (4):
                printf("\tVer um compromisso\n\n");


        }


    }
/*if (1) {
printf("insere prioridade: ");
scanf("%d", compromisso->prioridade);
printf("insere dia: ");
scanf("%d", compromisso->dia);
printf("insere mes: ");
scanf("%d", compromisso->mes);
printf("insere ano: ");
scanf("%d", compromisso->ano);
printf("insere hora: ");
scanf("%d", compromisso->hora);
printf("insere minuto: ");
scanf("%d", compromisso->minuto);
printf("insere duracao: ");
scanf("%d", compromisso->duracao);
printf("insere descricao: ");
scanf("%s", compromisso->descricao);
insereCompromisso(agenda1, compromisso->prioridade, compromisso->dia, compromisso->mes, compromisso->ano, compromisso->hora, compromisso->minuto, compromisso->duracao, compromisso->descricao);
}
else if(2){
printf("Insira nova prioridade: ");
scanf("%d",compromisso->prioridade);
compromisso->prioridade = alteraprioridade(compromisso, compromisso->prioridade);
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
//imprimeListaDeAgenda(listaDeAgenda);
//imprimeAgenda(agenda);
return 0;
}