#include <stdio.h>
#include <string.h>

void main() {
    char nome[30];
    int idade;
    printf("Insira o nome: ");
    gets(nome);
    printf("Insira a idade: ");
    scanf("%d", &idade);
    int tam = strlen(nome);
    if(nome[tam - 1] == 'a'){
        if(idade < 25){
            printf("Aceita\n");
        }
    }
    else{
        printf("Não aceito\n");
    }
}