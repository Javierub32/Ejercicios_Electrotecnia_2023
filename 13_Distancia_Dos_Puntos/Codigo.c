#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float x1, y1, x2, y2;
    float distancia;

    printf("Introduce x1: ");
    scanf("%f", &x1);
    printf("Introduce y1: ");
    scanf("%f", &y1);
    printf("Introduce x2: ");
    scanf("%f", &x2);
    printf("Introduce y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("La distancia entre ambos puntos es: %.3f\n", distancia); 

    /*
    el %.3f indica la cantidad de decimales 
    que se deven mostrar en la variable tipo float
    */
   
    system("pause");
    return 0;
}
