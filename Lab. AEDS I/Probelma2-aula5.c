#include <stdio.h>

void main(){
    float salario, aliquota = 0;
    for(int c = 0; c < 10; c++){
        scanf("%f", &salario);
        if (salario < 1300)
        {
            printf("Isento da Alíquota");
        }
        if (1300 <= salario && salario < 2300)
        {
            aliquota = salario * 0.1;
            printf("Alíquota = %f", aliquota);
        }
        if(salario > 2300){
            aliquota = salario * 0.15;
            printf("Alíquota = %f", aliquota);
        }
    }
}