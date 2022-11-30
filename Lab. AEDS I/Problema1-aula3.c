#include <stdio.h>

void main() {
    int num = 0, soma = 0;
    do{
       puts("Insira um número inteiro: ");
       scanf("%d", &num);
       soma += num;
    }while((num % 2) != 0);
    printf("A soma dos números digitados é: %d\n", soma);
}