// strlwr(cadena);
// Convierte a minúsculas todas las letras de una cadena de texto.
#include <stdio.h>
#include <string.h>
#include "myString.h"

int main()
{
    char texto[100];
    printf("Escribe un texto con mayusculas y minusculas\n");
    fflush(stdin);
    //scanf("%s", &texto);
    gets(texto);

    //char textoNuevo[] = strlwr(texto);

    printf("El nuevo texto es el siguiente:\n");
    printf("%s\n", strlwr(texto));

    return 0;
}