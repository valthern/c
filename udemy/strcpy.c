// strcpy(destino, origen);
#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Programacion";
    // La cadena "Programacion" contiene 12 caracteres
    // sin embargo hay que contar un caracter de terminación
    // para evitar extraer basura de la memoria. El caracter
    // de terminación es: '\0'
    // Si hay que dar de alta otro arreglo vacío para evitar,
    // nuevamente, traer caracteres basura de la memoria, hay 
    // que inicializarla con una cadena con el caracter nulo.

    // Se crea el arreglo con los doce espacios más el caracter nulo
    char destino[13];/* = "\0";*/
    // Hacemos la copia
    strcpy(destino, origen);
    printf("%s\n", destino);

    return 0;
}