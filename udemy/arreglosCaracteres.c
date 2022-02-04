/**
 * @file arreglosCaracteres.c
 * @author Omar I. Martínez Gómez (omar_238@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>

#define TAM 20

int main(){
    char nombre1[TAM], nombre2[TAM];

    printf("nombre1: %s\n", nombre1);
    for (int i = 0; i < TAM; i++)
    {
        printf("nombre1[%d] = %d\n", i, nombre1[i]);
    }
    
    printf("nombre2: %s\n", nombre2);
    for (int i = 0; i < TAM; i++)
    {
        printf("nombre2[%d] = %d\n", i, nombre2[i]);
    }

    printf("Ingrese su nombre: ");
    fgets(nombre1, TAM, stdin);
    strtok(nombre1, "\n");

    printf("nombre1: %s\n", nombre1);
    printf("nombre2: %s\n", nombre2);

    strcpy(nombre2, nombre1);
    printf("Su nombre es: %s\n", nombre2);

    printf("nombre1: %s\n", nombre1);
    printf("nombre2: %s\n", nombre2);

    return 0;
}