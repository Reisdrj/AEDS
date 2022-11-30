#include <stdio.h>

int somaentre(int a, int b) {
    int cont = 0, soma = 0;
    if(a < b) {
        a += 1;
        while(a != b){
            soma += a;
            a++;
        }
    }
    else if(a >= b){
        printf("Error404!");
    }
    return soma;
}

void main() {
    int total = 0, num1 = 0, num2 = 0;
    printf("Insira dois números: ");
    scanf("%d %d", &num1, &num2);
    total = somaentre(num1, num2);
    printf("A soma de números entre %d e %d, é: %d \n", num1, num2, total);
}



//Faça um programa contendo uma função que receba dois números inteiros positivos como parâmetros e retorna a soma dos n números inteiros existentes entre eles