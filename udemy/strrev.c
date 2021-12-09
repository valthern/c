// strrev(cadena);
// invierte la posición de los caracteres en una cadena de caracteres
#include <stdio.h>
#include <string.h>
#include "myString.h"

int main (){
    char cadena[] = "Hola pinches putitos culerines";
    printf("Cadena invertida: %s\n", strrev(cadena));

    return 0;
}