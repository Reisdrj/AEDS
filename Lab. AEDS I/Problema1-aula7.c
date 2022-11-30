#include <stdio.h>

void main() {
    int vex[10];
    float vey[10];
    for(int i = 0; i < 10; i++) {
        vey[i] = 0;
    }
    for(int i = 0; i < 10; i++) {
        vex[i] = 0;
    }
    for (int i = 0; i < 10; i++){
        scanf("%d", &vex[i]);
    }
    for(int i = 0; i < 10; i++){
        if((i % 2) == 0)
            vey[i] = (float)vex[i] / 2;
        else
        {
            vey[i] = vex[i] * 3;
        }
        
    }
    printf("Vetor x: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vex[i]);
    }
    printf("\nVetor Y: ");
    for(int i = 0; i < 10; i++){
        printf("%f ", vey[i]);
    }
    printf("\n");
}