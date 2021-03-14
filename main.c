#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"
#include "agenda.h"
#include "instituicao.h"
#include "listaDeAgendas.h"
int main(){

    Compromisso *compromisso = (Compromisso*) malloc(sizeof(Compromisso));
    Instituicao *instituicao = (Instituicao*) malloc(sizeof(Instituicao));
    ListaDeAgenda *listaDeAgenda = (ListaDeAgenda*) malloc(sizeof(ListaDeAgenda));
    criaListaDeAgenda(listaDeAgenda);
    int opcao;
    int idProfessorPreterido;
    int temLogin;
    printf("\tMenu Principal\n\n");
    printf("Criar agenda\n");
    printf("ler arquivo\n");
    printf("login\n");
    printf("imprimir lista\n");

    switch (opcao) {
        case (1):
            Agenda *agenda = (Agenda *) malloc(sizeof(Agenda));
            char nome;
            int ano;
            printf("Digite o nome: ");
            scanf("%s", nome);
            printf("Digite o ano: ");
            scanf("%d", ano);
            criaAgenda(agenda, idProfessorPreterido, nome, ano);
            insereAgenda(listaDeAgenda, agenda);
        case (2):
            /*ler arquivo*/
        case (3):

        case (4):
            imprimeListaDeAgenda(listaDeAgenda);
    }



    if (temLogin == 0) {

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
                insereCompromisso(/*agenda*/ prioridade, dia, mes, ano, hora, minuto, duracao, descricao);

            case (2):
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
                alteraprioridade(/*agenda*/ novaPrioridade);
            case (4):
                printf("\tVer um compromisso\n\n");


        }


        }
    }
    if (1) {
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
    imprimeListaDeAgenda(listaDeAgenda);
    //imprimeAgenda(agenda);
    return 0;
}