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
    printf("\t\tNome =  %s \n", instituicao->nome);
    printf("\t\tEspecialidade =  %s \n", instituicao->especialidade);
    printf("\t\tTipo =  %s \n", instituicao->tipoInstituicao);
}