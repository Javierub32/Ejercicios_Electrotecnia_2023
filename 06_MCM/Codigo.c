#include <stdio.h>
#include <stdlib.h>

// MCD (A,B) X MCM (A,B) = A X B
// MCM (A,B) = A X B / MCD (A,B)

int main()
{
    int numero1, numero2;
    int residuo, mcd, MCM;

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

    MCM = (numero1 * numero2) / mcd;
    printf("El MCM entre %i y %i es: %i \n", numero1, numero2, MCM);

    system("pause");
    return 0;
}