#include <stdio.h>

void Imp(q, c){
    for(int i = q; i > 0; i--){
        printf("%c ", c);
    }
    printf("\n");
}

void main() {
    int q;
    char c;
    printf("Insira uma letra e um número: ");
    scanf("%c %d", &c, &q);
    Imp(q, c);
}