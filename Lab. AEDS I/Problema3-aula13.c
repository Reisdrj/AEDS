#include <stdio.h>
#include <stdlib.h>

void main() {
    int qntd;
    int par = 0, impar = 0;
    printf("Insira um número: ");
    scanf("%d", &qntd);
    int *p = (int*) malloc(qntd * sizeof(int));
    printf("Preencha o vetor: ");
    for(int i = 0; i < qntd; i++){
        scanf("%d", p);
        if((p[i] % 2) == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    int *pares = (int*) malloc(par * sizeof(int));
    int *impares = (int*) malloc(impar * sizeof(int));
    for(int i = 0; i < qntd; i++)
    {
        int j = 0;
        if(p[i] % 2 == 0){
            pares[i] = p[i];
        }
        else{
            impares[i] = p[i];
        }
    }
    for(int i = 0; i < par; i++){
        printf("%d", pares[i]);
    }
    for(int i = 0; i < impar; i++){
        printf("%d", impares[i]);
    }
    printf("\n");
}