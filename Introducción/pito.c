/*
g++ pito.c -o pito
./pito.exe
*/

#include <stdio.h>
#include <stdlib.h> //METE EL SYSTEM  ¡IMPORTANTE!

int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

/*%d es un especificador de formato en el lenguaje de programación C. Se utiliza en conjunción con la función printf o scanf para indicar que se está trabajando con un valor entero (int).

En la función printf, %d indica que se desea imprimir un valor entero en su lugar. Por ejemplo, printf("%d", num1) imprimirá el valor almacenado en la variable num1 como un número entero.

En la función scanf, %d indica que se está leyendo un valor entero de la entrada estándar. Por ejemplo, scanf("%d", &num1) leerá un número entero de la entrada estándar y lo almacenará en la variable num1.*/

    sum = num1 + num2;
    printf("%d + %d = %d", num1, num2, sum);
    printf(": \n");
    system("pause");
    return 0;
}
