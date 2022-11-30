#include <stdio.h>

void main() {
    int matriz[4][4];
    int valor, maior, l = 0, c = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            puts("Insira o valor: ");
            scanf("%d", &valor);
            matriz[i][j] = valor;
            if(j == 0 && i == 0){
                maior = valor;
            }
            else {
                if(valor > maior){
                    maior = valor;
                    l = i;
                    c = j;
                }
            }
        }
    }
    printf("O maior valor inserido foi %d, na poisção matriz [%d][%d]\n", maior, l, c);
}