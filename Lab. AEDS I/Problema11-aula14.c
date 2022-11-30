#include <stdio.h>
#include <stdlib.h>
int conferir(int **p, int l, int c){
    int v = 0;
    printf("\nInsira um número para ver se ele está na matriz: ");
    scanf("%d", &v);
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(v == p[i][j]) return 1;
        }
    }
    return 0;
}

void main(){
    int linhas, colunas;
    printf("Insira o número de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);
    int **p = (int**) malloc(linhas * sizeof(int));
    for(int i = 0; i < linhas; i++){
        p[i] = (int*) malloc( colunas * sizeof(int));
    }
    printf("\nPreencha a matriz: ");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &p[i][j]);
        }
    }
    int result = conferir(p, linhas, colunas);
    if(result == 1){
        printf("\nO número digitado está presente na matriz!\n");
    }
    else{
        printf("\nO número digitado não está na matriz!\n");
    }
}