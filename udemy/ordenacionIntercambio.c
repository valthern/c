/**
 * @file ordenacionIntercambio.c
 * @author Omar I. Martínez Gómez (omar_238@hotmail.com)
 * @brief Algoritmo de Ordenación por Intercambio
 * @version 0.1
 * @date 2022-02-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#define TAMANO 10

void imprimirArreglo(int arreglo[],int size);
void ordenarXIntercambio(int arreglo[],int size);

int main(){
    int a[10] = {9,7,5,3,1,0,8,6,4,2};

    printf("Impresión del arreglo en orden original:\n");
    imprimirArreglo(a, TAMANO);
    
    ordenarXIntercambio(a, TAMANO);

    printf("Impresión del arreglo ordenado:\n");
    imprimirArreglo(a, TAMANO);

    return 0;
}

void imprimirArreglo(int arreglo[],int size){
    for (int i = 0; i < size; i++)
        printf("%i ", arreglo[i]);
}

void ordenarXIntercambio(int arreglo[],int size){
    int swp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                swp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = swp;
            }
        }
    }
}