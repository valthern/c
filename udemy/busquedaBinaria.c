#include <stdio.h>
#define TAMANO 10

int main()
{
    int a[TAMANO] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int aux, dato, inf, sup, mitad;
    char band = 'F';

    // Método burbuja
    for (int i = 0; i < TAMANO; i++)
    {
        for (int j = 0; j < TAMANO; j++)
        {
            if (a[j] > a[j + 1])
            {
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < TAMANO; i++)
    {
        printf("%i, ", a[i]);
    }

    printf("\nEscribe un número: ");
    scanf("%i", &dato);

    // Búsqueda binaria
    inf = 0;
    sup = 10;

    while (inf <= sup)
    {
        mitad = (inf + sup) / 2;

        if (a[mitad] == dato)
        {
            band = 'V';
            break;
        }
        if (a[mitad] > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if (a[mitad] < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if (band == 'F')
    {
        printf("El número no existe\n");
    }
    else if (band == 'V')
    {
        printf("El número existe en la posición %i\n", mitad);
    }

    return 0;
}