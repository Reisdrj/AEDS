#include <stdio.h>

struct hora{
    int hora;
    int minuto;
    int seg;
};

void main() {
    struct hora h[5];

    int mhora, mmin, mseg;

    for(int i = 0; i < 5; i++){
        printf("Insira a hora: ");
        scanf("%d", &h[i].hora);
        printf("\nInsira os minutos: ");
        scanf("%d", &h[i].minuto);
        printf("\nInsira os segundos: ");
        scanf("%d", &h[i].seg);
    }

    for(int i = 0; i < 5; i++){
        if(i == 0){
            mhora = h[i].hora;
            mmin = h[i].minuto;
            mseg = h[i].seg;
        }
        else{
            if(h[i].hora > mhora){
                mhora = h[i].hora;
                mmin = h[i].minuto;
                mseg = h[i].seg;
            }
            else if(h[i].hora == mhora){
                if(h[i].minuto > mmin ){
                    mmin = h[i].minuto;
                    mseg = h[i].seg;
                }
                else{
                    if(h[i].minuto == mmin){
                        if(h[i].seg > mseg){
                            mseg = h[i].seg;
                        }
                    }
                }
            }
        }
    }

    printf("A maior hora é %dh %dmin %ds\n", mhora, mmin, mseg);
}