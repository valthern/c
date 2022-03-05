/**
 * @file ordenacionInsercion.c
 * @author Omar I. Martínez Gómez (omar_238@hotmail.com)
 * @brief Algoritmo de Ordenación por Inserción
 * @version 0.1
 * @date 2022-02-20
 * Ejercicio del libro "Programación en Java 2, Algoritmos, Estructura
 * de datos y Programación orientada a objetos"; Joyantes Aguilar, Luis;
 * Zahonero Martínez, Ignacio; Editorial McGraw-Hill
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
#define TAMANO 10

void imprimirArreglo(int arreglo[], int size);
void ordernarXInsercion(int arreglo[], int size);

int main (){
    int a[TAMANO] = {9,7,5,3,1,0,8,6,4,2};

    printf("Impresión del arreglo en orden original:\n");
    imprimirArreglo(a, TAMANO);

    ordernarXInsercion(a, TAMANO);

    printf("Impresión del arreglo ordenado:\n");
    imprimirArreglo(a, TAMANO);
    
    return 0;
}

void imprimirArreglo(int arreglo[], int size){
    for (int i = 0; i < size; i++)
        printf("%i ", arreglo[i]);
    printf("\n");
}

void ordernarXInsercion(int arreglo[], int size){
    
}