#include <stdio.h>

void main() {
    int num, letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um número: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        printf("%c ", letra);
    }
    printf("\n");
}