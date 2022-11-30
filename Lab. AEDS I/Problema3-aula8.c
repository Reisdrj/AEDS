#include <stdio.h>

void main() {
    int letra = 0, letranova = 0;
    char frase[100];
    printf("Digite uma frase em letras maísculas: ");
    gets(frase);
    int tam = strlen(frase);
    int fim = tam - 1;
    for(int i = 0; i <= fim; i++){
        letra = (int)frase[i];
        if(65 <= letra && letra <= 90){
            letranova = letra + 32;
            letranova = (char)letranova;
            printf("%c", letranova);
        }
    }
    printf("\n");
}