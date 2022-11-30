#include <stdio.h>

int potencia(int a, int b){
    if(b == 0) return 1;
    return a * potencia(a, b - 1);
}

void main(){
    int num, pot, result;
    printf("Insira um número e a potẽncia desejada: ");
    scanf("%d %d", &num, &pot);
    result = potencia(num, pot);
    printf("A %dª potência de %d é: %d\n", pot, num, result);
}