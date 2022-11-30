#include <stdio.h>

void main() {
    int valores[10];
    int valor, p1, p2, soma;
    for(int i = 0; i < 10; i++){
        puts("Insira um valor: ");
        scanf("%d", &valor);
        valores[i] = valor;
    }
    puts("Insira os índices para efetuar a soma do termos: ");
    scanf("%d %d", &p1, &p2);
    soma = valores[p1] + valores[p2];
    printf("A soma dos termos é: %d\n", soma);
}