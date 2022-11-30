#include <stdio.h>

void main() {
    float num;
    puts("Insira um número para saber se ele é positivo, negativo ou nulo");
    scanf("%f", &num);
    if(num > 0) {
        printf("O número %.1f é positivo", num);
    }
    if(num < 0) {
        printf("O número %.1f é negativo", num);
    }
    if(num == 0) {
        printf("O número %.1f é igual a zero", num);
    }
}