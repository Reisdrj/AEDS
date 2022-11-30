#include <stdio.h>

void main(){
    float salario[10];
    for(int c = 0; c < 10; c++){
        scanf("%f", &salario[c]);
    }

    for(int i = 9; i > 0; i--){
        printf("O salário da pessoa %d é %.2f\n", i, salario[i]);
    }
}