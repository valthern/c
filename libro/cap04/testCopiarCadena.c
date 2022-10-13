#include <stdio.h>
#include "cadenas.h"

int main()
{
    char nom[15];

    copiarCadena(nom, "Omar");
    printf("nom = %s\n", nom);

    return 0;
}
