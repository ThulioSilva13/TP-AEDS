
#ifndef TP01_INSTITUICAO_H
#define TP01_INSTITUICAO_H

typedef struct {
    char nome[20];
    char especialidade[20];
    char tipoInstituicao[20];
}Instituicao;

void inicializaInstituicao(Instituicao *instituicao, char nome[20], char especialidade[20], char tipoInstituicao[20]);
void imprimeInstituicao(Instituicao *instituicao);
#endif //TP01_INSTITUICAO_H
