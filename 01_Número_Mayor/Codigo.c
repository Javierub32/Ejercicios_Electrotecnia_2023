#include <stdio.h>
#include <stdlib.h>

int main() {
    // system("color f0");

    int num1, num2, num3; 
    int max;

    scanf("%i" "%i" "%i", &num1, &num2, &num3);
    max = num1;

    if (num2 > max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }

    printf("El numero mayor es: %i \n", max);

    system("pause");
    return 0;
}