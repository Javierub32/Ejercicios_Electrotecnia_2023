#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius, fahrenheit;

    printf("Introduce la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Grados Fahrenheit = %.2f  Grados Celsius\n", fahrenheit, celsius); // el %.3f indica la cantidad de decimales que se deven mostrar en la variable tipo float

    system("pause");
    return 0;
}
