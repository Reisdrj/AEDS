#include <stdio.h>

void main() {
    int num, fatorial = 1;
    puts("Insira um número natural para saber o seu fatorial: ");
    scanf("%d", &num);
    int nump = num;
    for( num; num >= 1; num--) {
        fatorial *= num;
    }
    printf("O fatorial de %d é: %d\n", nump, fatorial);
}