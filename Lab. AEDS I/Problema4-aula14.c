#include <stdio.h>
#include <string.h>

char inverte(char *frase, int tam){
    printf("%c", frase[tam]);
    if(tam == 0) return '\0';
    return inverte(frase, tam -1);
}

void main(){
    char frase[20];
    char *p = (char*) malloc(sizeof(char));
    printf("Insira uma frase: ");
    fgets(frase, 20, stdin);
    int tam = strlen(frase);
    inverte(frase, tam);
    printf("\n");
}