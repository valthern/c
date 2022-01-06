/**
 * @file arrays.c
 * @author Omar I. Martínerz Gómez (omar_238@hotmail.com)
 * @brief Arreglos y su uso
 * Se declaran así:
 * TipoDeDato nombreDelArray[tamaño] = {valor1, valor2, ... valorN};
 * @version 0.1
 * @date 2022-01-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main() {
    int array[3] = {24, 5, 96};
    int array2[10];

    printf("\nPrimer valor[0]: %d", array[0]);
    printf("\nSegundo valor[1]: %d", array[1]);
    printf("\nTercer valor[2]: %d", array[2]);

    array[1] = 40;
    printf("\n\nEl valor del elemento 1 ahora vale: %d\n", array[1]);

    for (int i = 0; i < 10; i++)
    {
        printf("\nEscribe el valor para el índice %d: ", i);
        scanf("%d", &array2[i]);
    }
    
    int indice = -1;
    while (++indice < 10)
    {
        printf("%d ", array2[indice]);
    }
    printf("\n");

    return 0;
}