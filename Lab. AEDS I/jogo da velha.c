#include <stdio.h>

void main() {
    int l, c, linha, coluna;
    int ganhou = 0;
    int jogador = 0;
    char jogo[3][3];
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++)
            jogo[l][c] = ' ';    
    }
    do {
        printf("\n    0   1   2\n\n");
        for(l = 0; l < 3; l++){
            printf("%d  ", l);
            for(c = 0; c < 3; c++){
                printf(" %c ", jogo[l][c]);
                if(c < 2)
                   printf("|");
            }
            if(l < 2)
               printf("\n   -----------");
            printf("\n");
        }

        printf("\n Insira a linha e coluna para marcar: ");
        scanf("%d %d", &linha, &coluna);
        if(jogador == 0){
           jogo[linha][coluna] = 'X';
           jogador++;
        }

        else{
           jogo[linha][coluna] = 'O';
           jogador--;
        }

        if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
           jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
           jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X') {
              printf("Voce ganhou!");
              ganhou++;
           }
        else if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
             jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
             jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O') {
                printf("Voce ganhou!");
                ganhou++;
           }
        else if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
           jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
           jogo[0][3] == 'X' && jogo[1][3] == 'X' && jogo[2][3] == 'X') {
              printf("Voce ganhou!");
              ganhou++;
           }
        else if(jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
             jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
             jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O') {
                printf("Voce ganhou!");
                ganhou++;
           }
        else if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X') {
              printf("Voce ganhou!");
              ganhou++;
           }
        else if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O') {
              printf("Voce ganhou!");
              ganhou++;
           }
        else if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X') {
              printf("Voce ganhou!");
              ganhou++;
           }
        else if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O') {
              printf("Voce ganhou!");
              ganhou++;
           }
   }while(ganhou == 0);

}