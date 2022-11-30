#include <stdio.h>
#include <string.h>

void main() {
    char palavra[10] = {NULL};
    __fpurge(stdin);
    printf("Insira uma palavra: ");
    gets(palavra);
    int tam = strlen(palavra);
    int i = tam - 1;
    for(i; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");
}