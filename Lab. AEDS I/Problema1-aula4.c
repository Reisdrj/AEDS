#include <stdio.h>

void main() {
    int soma = 0, num;
    printf("Insira um número para saber a soma de todos os termos até ele: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        soma += i;
    }
    printf("A soma de todos os termos é: %d\n", soma);
}