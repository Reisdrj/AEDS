#include <stdio.h>

void main() {
    int contc = 0, contb=0, contt=0, contecar=0, produto = 0;
    float valor;
    do{
        printf("----------SUPERMERCADO----------\n");
        printf("1 pao ---------- R$ 10.99 \n 2 suco ---------- R$ 8.34 \n 3 biscoito ---------- R$ 4.26 \n 4 refrigerante ---------- R$ 4.56\n");
        printf("Digite o número do produto desejado(ou digite 0 para sair): ");
        scanf("%d", &produto);
        if (produto == 1) {
            valor += 10.99;
            contc++;
        }
        if (produto == 2) {
            valor += 8.34;
            contb++;
        }
        if (produto == 3) {
            valor += 4.26;
            contt++;
        }
        if (produto == 4) {
            valor += 4.56;
            contecar++;
        }
    }while(produto != 0);
    printf("\nValor: %.2f \n Quantidade de cada produto: \n -pao: %d \n -suco: %d \n -biscoito: %d \n -refrigerante: %d", valor, contc, contb, contt, contecar);
}