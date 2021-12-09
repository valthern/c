#include <stdio.h>
#include <string.h>

// Para ver si devuelve el tamaño completo del arreglo a lo que
// apunta el puntero
int main (){
    char texto[] = "Esto es una pinche mamada bien chueca";
    char *puntero = (char *)texto;
    printf("tamaño desde el puntero: %lu\n", strlen(puntero));
    printf("tamaño desde el arreglo: %lu\n", strlen(texto));

    return 0;
}
// Sí lo devuelve

// 