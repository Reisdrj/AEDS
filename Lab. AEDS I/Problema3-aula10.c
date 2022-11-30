#include <stdio.h>

void Conversor(frase){
    int l;
    for(int i = 0; i < 30; i++){
        l = frase[i];
        if(l >= 97 && l <= 122){
            l -= 32;
            printf("%c", l);
        }
    }
}

void main() {
    char frase[30];
    printf("Insira uma palavra ou frase: ");
    fgets(frase, 30, stdin);
    Conversor(frase);  
}