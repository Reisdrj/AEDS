#include <stdio.h>

void imprimir(int a, char l) {
    for(int i = a; i > 0; i--){
        printf("%c ", l);
    }
    printf("\n");
}

void main() {
    int num;
    char letra;
    printf("Insira uma letra: ");
    scanf("%c", &letra);
    printf("Insira um número: ");
    scanf("%d", &num);
    imprimir(num, letra);
}