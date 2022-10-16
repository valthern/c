#include <stdio.h>
#include "cadenas.h"

int main()
{
    char b[] = "Juan";
    char a[] = "Juana";
    printf("%s vs %s = %d\n", a, b, compararCadenas(a, b));

    return 0;
}
