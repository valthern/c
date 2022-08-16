#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    int a=3, b=2, c;
    float area;
    char inicial;

    c=suma(a,b);
    printf("la suma es %d\n", c);
    c=resta(a,b);
    printf("la resta es %d\n", c);
    area=areaCirculo(2);
    printf("El area del circulo es %f\n", area);
    inicial=primerCaracter("chelin");
    printf("la palabra %s empieza con %c\n","chelin",inicial);

    return 0;
}
