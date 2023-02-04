#include <stdio.h>
#include <stdlib.h>

int main() {
    int suma;
    suma = 0;
    int i;
    for (i = 0 ; i<=100 ; i++){
        suma= suma + i;
    }

    printf("La suma de los primeros 100 numeros naturales es: %i \n", suma);
    system("pause");
    return 0;
}