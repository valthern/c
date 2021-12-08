// strrev(cadena);
// invierte la posición de los caracteres en una cadena de caracteres
#include <stdio.h>
#include <string.h>

int main (){
    char cadena[] = "Hola pinches putitos";
    strrev(cadena);
    printf("Cadena invertida: %s\n",cadena);

    return 0;
}