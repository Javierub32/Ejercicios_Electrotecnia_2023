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

    printf("El MCD es: %d\n", mcd);
    system("pause");
    return 0;
}