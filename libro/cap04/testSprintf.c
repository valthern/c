#include <stdio.h>

int main()
{
    char nom[] = "Pablo";
    int edad = 39;
    double altura = 1.7;

    char salida[50];

    sprintf(salida, "Mi nombre es %s, tengo %d y mido %.2lf", nom, edad, altura);

    printf("%s\n", salida);
}