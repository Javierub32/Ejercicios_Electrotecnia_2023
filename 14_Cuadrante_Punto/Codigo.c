#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    printf("Introduce x: ");
    scanf("%i", &x);
    printf("Introduce y: ");
    scanf("%i", &y);

    if (x == 0 && y == 0) {
        printf("El punto esta en el origen.\n");
    } else if (x == 0) {
        printf("El punto esta en el eje y.\n");
    } else if (y == 0) {
        printf("El punto esta en el eje x.\n");
    } 

    if (x > 0 && y > 0) {
        printf("El punto esta en el primer cuadrante.\n"); 
    }
    if (x < 0 && y > 0) {
        printf("El punto esta en el segundo cuadrante.\n");
    }
    if (x < 0 && y < 0) {
        printf("El punto esta en el tercer cuadrante.\n");
    }
    if (x > 0 && y < 0) {
        printf("El punto esta en el cuarto cuadrante.\n");
    }

    system("pause");
    return 0;
}
