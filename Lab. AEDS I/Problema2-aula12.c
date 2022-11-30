#include <stdio.h>
int tam(char str[]) {
    if(str[0] == '\0' || str[0] == '\n') return 0;
    return 1 + tam(str + 1);
}

void main() {
    char frase[15];
    fgets(frase, 15, stdin);
    printf("O tamanho da frase inserida é: %d \n", tam(frase));
}