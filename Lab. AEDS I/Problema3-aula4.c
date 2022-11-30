#include <stdio.h>

void main() {
    int qtermos, termoatual = 1, termoanterior = 0, novotermo = 0;
    printf("ENésimo termo: ");
    scanf("%d", &qtermos);
    for( int i = 0; i < qtermos; i++){
        if (i == 0){
            printf("0\n");
        }
        else if(i == 1){
            printf("1\n");
        }
        else
        {
            novotermo = termoatual;
            termoanterior = termoatual;
            novotermo = termoanterior;
            printf("%d\n", novotermo);
        }
    }
}