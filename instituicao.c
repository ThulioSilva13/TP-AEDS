#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "instituicao.h"

void inicializaInstituicao(Instituicao *instituicao, char nome[20], char especialidade[20], char tipoInstituicao[20]){
    strcpy(instituicao->nome, nome);
    strcpy(instituicao->especialidade, especialidade);
    strcpy(instituicao->tipoInstituicao, tipoInstituicao);
}

void imprimeInstituicao(Instituicao *instituicao) {
    printf("\tImprime Instituicao\n");
    printf("\t\tnome =  %s \n", instituicao->nome);
    printf("\t\tespecialidade =  %s \n", instituicao->especialidade);
    printf("\t\ttipo =  %s \n", instituicao->tipoInstituicao);
}