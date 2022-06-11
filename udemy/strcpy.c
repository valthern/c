// strcpy(destino, origen);
#include <stdio.h>
#include <string.h>

#define TAMANO 20

int main() {
    // char origen[] = "Programacion";
    // La cadena "Programacion" contiene 12 caracteres
    // sin embargo hay que contar un caracter de terminación
    // para evitar extraer basura de la memoria. El caracter
    // de terminación es: '\0'
    // Si hay que dar de alta otro arreglo vacío para evitar,
    // nuevamente, traer caracteres basura de la memoria, hay 
    // que inicializarla con una cadena con el caracter nulo.

    // Se crea el arreglo con los doce espacios más el caracter nulo
    // char destino[13];/* = "\0";*/
    // Hacemos la copia
    // strcpy(destino, origen);
    // printf("%s\n", destino);

    char nombre1[TAMANO], nombre2[TAMANO];

    printf("nombre 1: %s\n", nombre1);
    printf("nombre 2: %s\n", nombre2);

    printf("Ingrese su nombre: ");
    fgets(nombre1,TAMANO,stdin);
    strtok(nombre1,"\n");

    strcpy(nombre2, nombre1);
    printf("Su nombre es: %s\n",nombre2);

    printf("nombre 1: %s\n", nombre1);
    printf("nombre 2: %s\n", nombre2);

    return 0;
}