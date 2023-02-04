#include<stdio.h>

void mediaArit ();
void mediaPonderada ();

int main()
{
    int cantidad, elegir;
    float promedio, calif, suma = 0;

    printf("Quieres hacer una media aritmetica o ponderada? (Escribe 0 o 1): \n");
    scanf("%i", &elegir);

    if (elegir == 0){
        mediaArit ();
    }
    else{
        mediaPonderada ();
}
}

void mediaArit () {
        int cantidad, elegir, a;
        float promedio, calif, suma = 0;
        printf("Cuantas notas vas a anadir?");
        scanf("%i", &cantidad);
        float matriznotas [cantidad];
        int i;
        for (i = 0; i < cantidad; i++) {
            printf("Examen_");
            printf( "%i", i + 1); 
            printf(": \n");
            scanf("%f", &calif);
            matriznotas [i] = calif;
            suma = suma + matriznotas[i];
        }
        promedio = suma / cantidad;
        printf("\n");
        printf("Tu nota media es: \n");
        printf("%f", promedio);
        scanf("%f", &a);
}

void mediaPonderada () {
        int cantidad, elegir, a;
        float promedio, calif, ponderacion, suma = 0;
        printf("Cuantas notas vas a anadir? \n");
        scanf("%i", &cantidad);
        float matriznotas [cantidad];
        float matrizponderada [cantidad];
        int i;
        for (i = 0; i < cantidad; i++) {
            printf("Examen_");
            printf( "%i", i + 1); 
            printf(": \n");
            scanf("%f", &calif);
            matriznotas [i] = calif;

            printf("Ponderacion_");
            printf( "%i", i + 1); 
            printf(": \n");
            scanf("%f", &ponderacion);
            matrizponderada [i] = ponderacion;

            suma = suma + (matriznotas[i] * matrizponderada[i]);
        }
        promedio = suma;
        printf("\n");
        printf("Tu nota media es: \n");
        printf("%f", promedio);
        scanf("%f", &a);
    }