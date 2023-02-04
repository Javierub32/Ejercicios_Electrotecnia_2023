#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;
    printf("Escoge el numero al que sumarle sus 100 numeros posteriores:");
    scanf("%i", &num);


    int suma;
    suma = 0;
    int i;
    for (i = num + 1 ; i<= num + 100 ; i++){
        suma += i;
    }

    printf("La suma de los primeros 100 numeros naturales posteriores a %i es: %i \n", num, suma);
    system("pause");
    return 0;
}