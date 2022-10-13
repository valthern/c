#include <stdio.h>
#include "cadenas.h"

int main()
{
    char nom[15];

    copiarCadena(nom, "Omar");
    printf("nom = %s\n", nom);
    printf("Longitud de %s = %d\n", "Omar", longitud("Omar"));
    printf("longitud de %s = %d\n", nom, longitud(nom));

    return 0;
}
