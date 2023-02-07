#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    int residuo, mcd;

    printf("Numero_1: ");
    scanf("%d", &numero1);

    printf("Numero_2: ");
    scanf("%d", &numero2);

    do
    {
        residuo = numero1 % numero2;

        if (residuo != 0)
        {
            numero1 = numero2;
            numero2 = residuo;
        }
        else
        {
            mcd = numero2;
        }

    } while (residuo != 0);

    // printf("El MCD es: %d\n", mcd);

    

    int suma;
    suma = 0;
    int i;
    for (i = mcd + 1 ; i<= mcd + 100 ; i++){
        suma += i;      //en cada iteración se suma el valor de i
    }

    printf("La suma de los primeros 100 numeros naturales posteriores al MCD de %i y %i (%i) es: %i \n", numero1, numero2, mcd, suma);


    system("pause");
    return 0;

    /* 
    este ejercicio es una mezcla del ejercicio 4 y 5 (solo se ha copiado sus respectivas 
    partes en este programa y se han modificafo para que funcionen en conjunto) 
    */
}