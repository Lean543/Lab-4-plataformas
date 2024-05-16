#include <stdio.h>

void encontrarMinMax(int *arreglo, int * minimo, int * maximo, int longitud){

    int i;

    int valor_actual;

    int valor_menor = arreglo[0];

    int valor_mayor = arreglo[0];

    for (i = 0; i < longitud; i += 1){

        valor_actual = arreglo[i];

        if (valor_actual < valor_menor){

            valor_menor = valor_actual;

        }

        if (valor_actual > valor_mayor){

            valor_mayor = valor_actual;


    }

    printf("El menor valor en el arreglo es %d\n", valor_menor);

    return 0;


}

int buscar_min(int longitud, int arreglo[longitud]){

    int i;

    int valor_actual;

    int valor_menor = arreglo[0];

    for (i = 0; i < longitud; i += 1){

        valor_actual = arreglo[i];

        if (valor_actual < valor_menor){

            valor_menor = valor_actual;

        }

    }

    printf("El menor valor en el arreglo es %d\n", valor_menor);

    return 0;

}


int buscar_max(int longitud, int arreglo[longitud]){

    int i;

    int valor_actual;

    int valor_mayor = arreglo[0];

    for (i = 0; i < longitud; i += 1){

        valor_actual = arreglo[i];

        if (valor_actual > valor_mayor){

            valor_mayor = valor_actual;

        }

    }

    printf("El mayor valor en el arreglo es %d\n", valor_mayor);

    return 0;

}


int main (){

    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};

    int longitud;

    longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    buscar_min(longitud, arreglo);

    buscar_max(longitud, arreglo);

    int maximo = 0;

    int mínimo = 0;

    int * ptr = &maximo;

    int * ptr = &minimo;

    encontrarMinMax(*arreglo, * minimo, * maximo, int longitud);

}