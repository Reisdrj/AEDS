#include <stdio.h>

struct Vetor{
   float x;
   float y;
   float z;
};

void main() {
    struct Vetor v[2];

    for(int i = 0; i < 2; i++){
        printf("\nInsira a coordenada x do vetor %d: ", i+1);
        scanf("%f", &v[i].x);
        printf("\nInsira a coordenada y do vetor %d: ", i+1);
        scanf("%f", &v[i].y);
        printf("\nInsira a coordenada z do vetor %d: ", i+1);
        scanf("%f", &v[i].z);
    }

    float somax = v[0].x + v[1].x;
    float somay = v[0].y + v[1].y;
    float somaz = v[0].z + v[1].z;

    printf("\nA soma dos 2 vetores é o vetor v = (%.1f, %.1f, %.1f)\n", somax, somay, somaz);
}