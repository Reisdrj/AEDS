#include <stdio.h>

void main(){
    int soma = 0, num = 1, cont = 0;
    float media = 0;
    while((num % 2) != 0){
        puts("Digite um inteiro: ");
        scanf("%d", &num);
        soma += num;
        cont++;
    }
    media = (float)soma/cont;
    printf("A média dos números digitados é: %.2f \n", media);
}

