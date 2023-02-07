#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, fact = 1;

    printf("Ingrese el numero que quiere factorizar:");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)        //multiplica 1*2*3*4... hasta llegar al número escrito 
    {
        fact *= i;                      //en cada iteración, multiplica i
    }

    printf("El factorial de %i es: %i \n", n, fact);

    system("pause");
    return 0;
}