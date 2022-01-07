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

int main(){
    const int filas = 2, columnas = 3;
    int tabla[filas][columnas] = {1,2,3,4,5,6};
    //int tabla[filas][columnas] = {{1,2,3},{4,5,6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", tabla[i][j]);
        }
        printf("\n");
    }
}
