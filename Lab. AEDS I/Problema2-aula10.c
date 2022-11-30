#include <stdio.h>
#include <math.h>

struct ponto{
    float x, y;
};

void main() {
    float dx, dy, dt;

    struct ponto p[2];
    for(int i = 0; i < 2; i++){
        printf("Insira as coordenadas do %d° ponto: ", i+1);
        scanf("%f %f", &p[i].x, &p[i].y);
    }
    dx = (p[0].x - p[1].x) * (p[0].x - p[1].x);
    dy = (p[0].y - p[1].y) * (p[0].y - p[1].y);

    dt = sqrt((dx + dy));
    printf("Resultado: %.3f\n", dt);
}