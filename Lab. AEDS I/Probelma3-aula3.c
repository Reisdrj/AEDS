#include <stdio.h>

void main() {
    int num, pot, result = 1;
    puts("Insira um número e a potência que deseja elevá-lo: ");
    scanf("%d %d", &num, &pot);
    int potp = pot;
    for(pot; pot > 0; pot--){
        result *= num;
    }
    printf("%d elevado a %d é: %d\n", num, potp, result);
}