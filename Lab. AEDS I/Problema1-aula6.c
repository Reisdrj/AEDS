#include <stdio.h>

void main() {
    int idade;
    float peso, peso10, peso20, peso30, peso31, cont10, cont20, cont30, cont31, media10, media20, media30, media31;
    for(int i = 0; i < 15; i++){
        puts("Insira a idade: ");
        scanf("%d", &idade);
        puts("Insira o peso");
        scanf("%f", &peso);
        if(1<= idade && idade <= 10){
            peso10 += peso;
            cont10++;
        }
        else if(10 < idade && idade <=20){
            peso20 += peso;
            cont20++;
        }
        else if(20 < idade && idade <= 30){
            peso30 += peso;
            cont30++;
        }
        else if(31 < idade){
            peso31 += peso;
            cont31++;
        }
    }
    media10 = peso10 / cont10;
    media20 = peso20 / cont20;
    media30 = peso30 / cont30;
    media31 = peso31 / cont31;
    printf("-Média 1-10: %.2f \n -Média 11-20: %.2f \n -Média 21-30: %.2f \n -Média 31+ : %.2f \n", media10, media20, media30, media31);
}