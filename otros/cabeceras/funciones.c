#include <stdio.h>
#include "funciones.h"

float PI=3.1415926;

int suma(int a, int b){
    return a+b;
}

int resta(int a, int b){
    return a-b;
}

char primerCaracter(char* cadena){
    return cadena[0];
}

double areaCirculo(int radio){
    return PI*radio*radio;
}
