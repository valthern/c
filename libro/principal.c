#include <stdio.h>
#include "funciones.h"

// programa principal
int main()
{
    double v, a;
    printf("Ingrese un valor numérico: ");
    scanf("%lf", &v);

    // invoco a la función
    a = valorAbsoluto(v);

    printf("El valor absoluto de %lf es %lf\n", v, a);

    return 0;
}