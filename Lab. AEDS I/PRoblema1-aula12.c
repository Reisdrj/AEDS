#include <stdio.h>

void main() {
    int v[10];
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    printf("\n\n");
    for(int i = 0; i < 10; i++) {
        printf("%p ",&v[i]);
    }
    printf("\n\n");
}