#include <stdio.h>


int buscar_param_bin_recu(int valor, int longitud, int arreglo[longitud], int inicio, int media, int final){

    media = (inicio + final)/2;

    if (arreglo[media] == valor){

        printf("Para busqueda binaria con recursividad:\n");

        printf("Valor encontrado en el arreglo, en la posición %d\n", media);

        return 0;

    }

    if (valor > arreglo[media]){

        inicio = media + 1;

    }else{

        final = media - 1;

    }

    if (inicio <= final){

        buscar_param_bin_recu(valor, longitud, arreglo, inicio, media, final);

        return 0;

    }

    printf("Para busqueda binaria con recursividad:\n");

    printf("No se encontró %d en el arreglo\n", valor);

    return 0;

}

int buscar_param_bin(int valor, int longitud, int arreglo[longitud]){

    printf("Para busqueda binaria:\n");

    int inicio = 0;

    int media = 1;

    int final = longitud - 1;

    while (inicio <= final){

        media = (inicio + final)/2;

        if (arreglo[media] == valor){

            printf("Valor encontrado en el arreglo, en la posición %d\n", media);

            return 0;

        }

        if (valor > arreglo[media]){

            inicio = media + 1;

        }else{

            final = media - 1;
        }


    }

    printf("No se encontró %d en el arreglo\n", valor);

    return 0;

}


int buscar_param(int valor, int longitud, int arreglo[longitud]){

    printf("Para busqueda lineal:\n");

    int i;

    for (i = 0; i < longitud; i += 1){

        if (arreglo[i] == valor){

            printf("Valor encontrado en el arreglo, en la posición %d\n", i);

            return 0;

        }

    }

    printf("No se encontró %d en el arreglo\n", valor);

    return 0;

}

int main (){

    int arreglo[] = {2, 4, 6, 23, 56, 79};

    int valor;

    int longitud;

    printf("Por favor ingrese el número a buscar: ");
    scanf("%d", &valor);

    longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    buscar_param(valor, longitud, arreglo);

    buscar_param_bin(valor, longitud, arreglo);

    int inicio = 0;

    int media = 1;

    int final = longitud - 1;

    buscar_param_bin_recu(valor, longitud, arreglo, inicio, media, final);


}