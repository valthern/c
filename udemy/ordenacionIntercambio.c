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
    int swp;

    printf("Impresión del arreglo en orden original:\n");
    imprimirArreglo(a, TAMANO);
    
    ordenarXIntercambio(a, TAMANO);

    printf("Impresión del arreglo ordenado:\n");

    return 0;
}

void imprimirArreglo(int arreglo[],int size){
    for (int i = 0; i < TAMANO; i++)
        printf("%i ", arreglo[i]);
}

void ordenarXIntercambio(int arreglo[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size; i++)
        {
            /* code */
        }
        
    }
    
}