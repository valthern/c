/**
 * @file binario.c
 * @author Omar I. Martínez Gómez (omar_238@hotmail.com)
 * @brief Manejo de números binarios en la computadora
 * @version 0.1
 * @date 2022-03-05
 *
 * @copyright Copyright (c) 2022
 * Escribe un programa en el cual se solicite al usuario llenar un arreglo de 10 elementos
 * (unicamente 0's y 1's). Una vez que el usuario llene el arreglo con el número binario
 * podrá seleccionar alguna codificación
 *
 * a.- Binario Puro
 * b.- Punto fijo (6 bit entero y 4 bit decimal)
 * c.- Complemento a 2
 *
 * El programa realizará la conversión y como salida mostrará el resultado
 * en representación decimal
 */

#include <stdio.h>
#include <math.h>
#define TAMANO 10

void binarioPuro(int arreglo[], int size);
void puntoFijo(int arreglo[], int size);
void complementoA2(int arreglo[], int size);

int main()
{
    int arreglo1[TAMANO], opcion;

    printf("Este programa hace conversiones de binario a tres diferentes tipos de codificación\n");
    printf("Primero llena el arreglo de 10 elementos\n\tsolo usa CERO Y UNO (0,1)\n");

    for (int i = 0; i < TAMANO; i++)
    {
        printf("Escribe el elemento [%i] del arreglo: ", i);
        scanf("%d", &arreglo1[i]);
    }

    printf("El arreglo queda de esta manera\n");
    for (int i = 0; i < TAMANO; i++)
        printf("%d ", arreglo1[i]);
    printf("\n");

    printf("1.- Binario Puro\n");
    printf("2.- Punto fijo (6 bit entero y 4 bit decimal)\n");
    printf("3.- Complemento a 2\n");
    printf("Opcion: ");
    scanf("%i", &opcion);

    switch (opcion)
    {
        case 1:
            printf("Seleccionaste binario puro\n");
            binarioPuro(arreglo1, TAMANO);
            break;
        case 2:
            printf("Seleccionaste punto fijo\n");
            puntoFijo(arreglo1, TAMANO);
            break;
        case 3:
            printf("Seleccionaste complemento a 2\n");
            complementoA2(arreglo1, TAMANO);
            break;
        default:
            break;
    }
    printf("\n");

    return 0;
}

void binarioPuro(int arreglo[], int size)
{
    int suma = 0, exponente = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        if (arreglo[i] == 1)
            suma += exp2(exponente);
        
        exponente++;
    }

    printf("El valor en decimal es: %i\n", suma);
}

void puntoFijo(int arreglo[], int size)
{
    // NOTA.- bitsEnteros y bitsDecimales hacen referencia a la posición
    // en que empiezan a hacer referencia
    int sumaEntera = 0, bitsEnteros = 5, expEntero = 0;
    float sumaDecimal = 0, bitsDecimales = size - 1, expDecimal = 0.5;

    // Parte entera
    for (int i = bitsEnteros; i >= 0; i--)
    {
        if (arreglo[i] == 1)
            sumaEntera += exp2(expEntero);
        
        expEntero++;
    }

    // Parte decimal
    for (int i = 6; i <= bitsDecimales; i++)
    {
        if (arreglo[i] == 1)
            sumaDecimal += expDecimal;
            
        expDecimal /= 2;
    }
    
    printf("El valor del numero en punto fijo es de %.4f\n", (sumaEntera + sumaDecimal));
}

void complementoA2(int arreglo[], int size)
{
    int posicion = size - 1;

    for (int i = 0; i < size; i++)
    {
        if (arreglo[i] == 1)
            arreglo[i] = 0;
        else
            arreglo[i] = 1;
    }

    while (arreglo[posicion] == 1){
        arreglo[posicion] = 0;
        posicion--;
        if (arreglo[posicion] == 0){
            arreglo[posicion] = 1;
            break;
        }
    }

    if (arreglo[posicion] == 0)
        arreglo[posicion] = 1;
    
    printf("Complemento a dos");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", arreglo[i]);
    }
    printf("\n");
}
