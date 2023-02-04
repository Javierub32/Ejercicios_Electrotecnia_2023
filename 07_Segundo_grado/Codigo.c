#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a,b,c;
    float x1,x2;
    float discriminante;

    printf("Ingrese los coeficientes de la ecuacion de segundo grado (a, b, c): \n");
    scanf("%f %f %f", &a, &b, &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las soluciones son x1 = %f y x2 = %f\n", x1, x2);

    }

    if (discriminante == 0) {
        x1 = -b / (2 * a);
        printf("La única solución es x = %f\n", x1);

    }

    if (discriminante < 0) {
        printf("Esta ecuación no tiene soluciones reales");
    }

    system("pause");
    return 0;

}