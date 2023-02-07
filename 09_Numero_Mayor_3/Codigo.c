#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int max = 0, min;

    while (1) {

        printf("Introduce numeros positivos (negativo para cerrar): ");
        scanf("%i", &n);

        if (n < 0) {
            break;
        }

        if (n >= 0) {
            if (n > max) {
                max = n;
            }
            if (n < min) {
                min = n;
            }
        }
        
    }

    printf("El numero mayor es %i \n", max);
    printf("El numero menor es %i \n", min);

    system("pause");
    return 0;
}