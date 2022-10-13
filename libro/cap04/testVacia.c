#include <stdio.h>
#include "cadenas.h"

int main()
{
    char a[20] = {0};
    char b[20] = "Hola";
    char c[20] = "\0 que pasa ahora?";

    printf("a = [%s] es vacia? %s\n", a, esVacia(a) ? "verdadero" : "falso");
    printf("b = [%s] es vacia? %s\n", b, esVacia(b) ? "verdadero" : "falso");
    printf("c = [%s] es vacia? %s\n", c, esVacia(c) ? "verdadero" : "falso");

    return 0;
}
