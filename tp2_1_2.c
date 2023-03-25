/*  Granero Javier - MArzo 25 */

#include <stdio.h>
#include <stdlib.h>
#define N 20

int main() {

    int i;
    double vt[N];
    double *punt_i;
    punt_i = vt;        // Forma correcta de incializar un puntero que apunte a la dirección de memoria del primer elemento del arreglo

    for(i=0; i<N; i++) {

        *punt_i = 1 + rand() % 100;
        printf("%.2f ", *punt_i);

        punt_i++;       // Se avanza a la siguiente dirección de memoria en el arreglo

    }

    return 0;

}