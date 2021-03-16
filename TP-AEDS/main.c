#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"
#include "agenda.h"
#include "instituicao.h"
#include "listaDeAgendas.h"

int main(){
    //declaração de variáveis
    char nomeprofessor[20]; char descricao[100]; char nomeInstituicao[20]; char Especialidade[20]; char Tipo[20];
    int ano; int ID; int escolha; int opcao; int idProfessorPreterido;
    int prioridade, dia, mes, hora, minuto, duracao; int idCompromisso; int idcompdesejado;
    int novaPrioridade;
    int ID1; int ID2;


    Compromisso *compromisso = (Compromisso*) malloc(sizeof(Compromisso));
    Instituicao *instituicao = (Instituicao*) malloc(sizeof(Instituicao));
    ListaDeAgenda *listaDeAgenda = (ListaDeAgenda*) malloc(sizeof(ListaDeAgenda));
    criaListaDeAgenda(listaDeAgenda);


    //menu principal
    while (opcao != 5){ //laço de repetição para entrar no menu;
        printf("\tMenu Principal\n\n"); //inicio das opções
        printf("\t================\n");
        printf("\tCriar agenda [1]\n");
        printf("\tLer arquivo [2]\n");
        printf("\tLogin [3]\n");
        printf("\tImprimir lista [4]\n");
        printf("\tSair [5] \n"); //sair do menu -> break no while
        printf("\t================\n");


        printf("-> Digite o opcao desejada:\n");
        scanf("%d", &opcao);
        //switch (opcao) {
        Agenda *agenda;
        if (opcao == 1) { //cria uma agenda
            agenda = (Agenda *) malloc(sizeof(Agenda));
            printf("-> Digite seu ID: \n");
            scanf("%d", &idProfessorPreterido);
            printf("-> Digite o nome:\n");
            scanf("%s", nomeprofessor);
            printf("-> Digite o ano:\n");
            scanf("%d", &ano);
            criaAgenda(agenda, idProfessorPreterido, nomeprofessor, ano);
            insereAgenda(listaDeAgenda, agenda);
        }
        //case (2):
        //  /ler arquivo/
        if (opcao == 3) {
            printf("-> Digite o ID: \n");
            scanf("%d", &ID);
            CelulaListaDeAgendas aux;
            aux = login(listaDeAgenda, ID);
            while(escolha != 0) {
                printf("\n\nSISTEMA DE GERENCIAMENTO DE TEMPO\n\n");
                printf("\t=======================\n");
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
                printf("\t=======================\n");
                printf("-> Digite o opcao desejada:\n");
                scanf("%d", &escolha);
                if (escolha == 1) {
                    printf("\tInsere compromisso\n\n"); //socorro
                    printf("-> Insira o id do compromisso: ");
                    scanf("%d", &idCompromisso);
                    printf("-> Insira a prioridade: ");
                    scanf("%d", &prioridade);
                    printf("-> Insira o dia: ");
                    scanf("%d", &dia);
                    printf("-> Insira o mes: ");
                    scanf("%d", &mes);
                    printf("-> Insira o ano: ");
                    scanf("%d", &ano);
                    printf("-> Insira a hora: ");
                    scanf("%d", &hora);
                    printf("-> Insira o minuto: ");
                    scanf("%d", &minuto);
                    printf("-> Insira a duracao: ");
                    scanf("%d", &duracao);
                    printf("-> Insira a descricao: ");
                    scanf("%s", descricao);
                    printf("Quantidade antes de inserir = %d\n", aux.agenda->qtd);
                    insereCompromisso(&aux,idCompromisso, prioridade, dia, mes, ano, hora, minuto, duracao, descricao);
                }


                if (escolha == 2) {
                    //como saber o id
                    printf("\tRemove compromisso\n\n");
                    printf("-> Digite o id do compromisso que deseja excluir\n");
                    scanf("%d", &idCompromisso);
                    removeCompromisso(&aux, idCompromisso);
                }
                if (escolha == 3) {
                    printf("\tAltera compromisso\n\n");
                    printf("-> Digite a nova prioridade do compromisso\n ");
                    scanf("%d", &novaPrioridade);
                    alteraprioridade(&aux, novaPrioridade);
                }
                if (escolha == 4) {
                    printf("\tVer um compromisso\n");
                    printf("-> Digite o ID do compromisso desejado\n");
                    scanf("%d", &idcompdesejado);
                    CelulaAgenda aux2;
                    aux2 = localizaCompromisso(&aux, idcompdesejado);
                    imprimeCompromisso(&aux2);
                }
                if (escolha == 5) {
                    printf("\tRecuperar data \n");
                    printf("-> Digite o dia preterido\n");
                    scanf("%d", &dia);
                    printf("-> Digite o mes preterido\n");
                    scanf("%d", &mes);
                    printf("-> Digite o ano preterido\n");
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
                    printf("-> Digite o nome da instituicao:\n");
                    scanf("%s", nomeInstituicao);
                    printf("-> Digite a especialidade da instituicao:\n");
                    scanf("%s", Especialidade);
                    printf("-> Digite o tipo da instituicao:\n");
                    scanf("%s", Tipo);
                    inicializaInstituicao(instituicao, nomeInstituicao, Especialidade, Tipo);
                }
                if (escolha == 9) {
                    printf("\tImprimir instituicao \n");
                    imprimeInstituicao(instituicao);
                }
                if (escolha == 10) {
                    printf("\tVerificar se há conflito \n");
                    printf("-> Digite o id dos compromissos que deseja verificar\n");
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