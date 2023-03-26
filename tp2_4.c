/*  Granero Javier - Marzo 25 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

/* Declaración de estructuras */

struct compu {
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} typedef compu;


/*  Declaración de funciones */

void show_list(compu *list);
void older_pc(compu *list);
void highspeed(compu *list);
void show_data_single(compu list);


int main() {
    
    char tipos[6][10] ={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu PCs[N];
    int i, option;

    srand(time(NULL));

    for(i=0; i<N; i++) {

        PCs[i].velocidad = rand() % (3) + 1;        // Valores aleatorios entre 1 y 3

        PCs[i].anio = rand() % (2023 - 2015 + 1) + 2015;       // Valores aleatorios entre 2015 y 2023

        PCs[i].cantidad = rand() % (8) + 1;     // Valores aleatorioes entre 1 y 8

        option = rand() % (6) + 1;      //Valores aleatorios entre 1 y 6

        PCs[i].tipo_cpu = tipos[option-1];

    }

    show_list(&PCs[0]);

    getchar();

    older_pc(&PCs[0]);

    getchar();

    highspeed(&PCs[0]);

    getchar();

    return 0;

}


/* Desarrollo de funciones */

void show_list(compu *list) {

    for(int i=0; i<N; i++) {

        printf("\n\n > PC nro. %d:", i+1);
        printf("\n");

        show_data_single(list[i]);
        printf("\n\n");
        
    }

}

void older_pc(compu *list) {

    int older = list[0].anio, cont1=1;

    for(int i=1; i<N; i++) {

        if(list[i].anio < older) {

            cont1 = 1;
            older = list[i].anio;

        }
        else {

            if(list[i].anio == older) {

                cont1++;

            }

        }

    }

    if(cont1 == 1) {
        
        printf("\n >> Esta es la PC m%cs antigua, fabricada en el a%co %d: \n", 160, 164, older);

        for(int i=0; i<N; i++) {

            if(list[i].anio == older) {

                show_data_single(list[i]);
                printf("\n\n");
            }

        }

    }
    else {

        printf("\n >> Estas son las %d PCs m%cs antiguas, fabricadas en el a%co %d: \n", cont1, 160, 164, older);

        for(int i=0; i<N; i++) {

            if(list[i].anio == older) {

                show_data_single(list[i]);
                printf("\n\n");

            }

        }

    }

}

void highspeed(compu *list) {

    int highspeed = list[0].velocidad, cont2=1;

    for(int i=1; i<N; i++) {

        if(list[i].velocidad > highspeed) {

            cont2 = 1;
            highspeed = list[i].velocidad;
            
        }
        else {

            if(list[i].velocidad == highspeed) {

                cont2++;

            }

        }

    }

    if(cont2 == 1) {

        printf("\n >> Esta es la PC m%cs r%cpida, con una velocidad de %d GHz\n", 160, 160, highspeed);

        for(int i=0; i<N; i++) {

            if(list[i].velocidad == highspeed) {

                show_data_single(list[i]);
                printf("\n\n");

            }

        }

    }
    else {

        printf("\n >> Estas son %d las PCs m%cs r%cpidas, con una velocidad de %d GHz\n", cont2, 160, 160, highspeed);

        for(int i=0; i<N; i++) {

            if(list[i].velocidad == highspeed) {

                show_data_single(list[i]);
                printf("\n\n");

            }

        }

    }

}

void show_data_single(compu list) {

    printf("\n\t >> Velocidad de procesamiento: %d GHz", list.velocidad);
    printf("\n\t >> A%co de fabricaci%cn: %d", 164, 162, list.anio);
    printf("\n\t >> Cantidad de n%ccleos: %d", 163, list.cantidad);
    printf("\n\t >> Tipo de procesador: %s", list.tipo_cpu);
    
}