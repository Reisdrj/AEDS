#include <stdio.h>

void main () {
    int num;
    puts("Insira um número para saber se ele é par ou ímpar: ");
    scanf("%d", &num);
    if ((num % 2) == 0 || num == 0)
        printf("O número %d é par!\n", num);
    else
        printf("O número %d é ímpar!\n", num);
}