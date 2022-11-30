#include <stdio.h>
#include <stdlib.h>

void main() {
    int tam = 0;
    printf("Insira o tamanho do vetor a ser lido: ");
    while(tam <= 0){
        scanf("%d", &tam);
    }
    int *p = (int*) malloc(tam * sizeof(int));
    for(int i =0; i < tam; i++){

        scanf("%d", (p + i) );
    }
    for(int i =0; i < tam; i++){
        printf("%d ", (p + i));
    }
    printf("\n");
}