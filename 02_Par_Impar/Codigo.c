#include <stdio.h>
#include <stdlib.h>

int main() {
    int num; 
    printf("Introduzca un numero:");
    scanf("%i", &num);

    if (num % 2 == 0){
        printf("%i es un numero par \n", num);
    }
    else {
        printf("%i es un numero impar \n", num);
    }

    system("pause");
    return 0;
}