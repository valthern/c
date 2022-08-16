/**
 * @file arraysBidimensionales.c
 * @author Omar I. Martínez Gómez (omar_238@hotmail.com)
 * @brief tipoDeDato nombreDelArray [numeroFilas][numeroColumnas];
 * @version 0.1
 * @date 2022-01-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#define FILAS 7
#define COLUMNAS 8

int main(){
    //const int filas = 7, columnas = 8;
    int tabla[FILAS][COLUMNAS] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56};
    //int tabla[filas][columnas] = {{1,2,3},{4,5,6}};

    printf("%i X %i = %i:\n\n", FILAS, COLUMNAS, (FILAS * COLUMNAS));

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            printf("%i\t", tabla[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
