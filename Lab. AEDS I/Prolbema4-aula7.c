#include <stdio.h>

void main() {
    int matrizA[4][6];
    int matrizB[4][6];
    int matrizD[4][6];
    for( int i = 0; i < 4; i++){
        for( int j = 0; j < 6; j++){
            matrizA[i][j] = 5;
        }
    }
    for( int i = 0; i < 4; i++){
        for( int j = 0; j < 6; j++){
            matrizB[i][j] = 1;
        }
    }
    for( int i = 0; i < 4; i++){
        for( int j = 0; j < 6; j++){
            matrizD[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    for( int i = 0; i < 4; i++){
        for( int j = 0; j < 6; j++){
            printf("%d ", matrizD[i][j]);
        }
        printf("\n");
    }
}