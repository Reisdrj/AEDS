#include <stdio.h>

struct aluno {
    int matricula;
    char nome[30];
    int nota1, nota2, nota3;
};

void main() {
    struct aluno aluno[1];
    printf("Tamnho do programa em Bytes: %d \n", sizeof(aluno) - 2);
}