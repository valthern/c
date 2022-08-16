// strlen(cadena);
#include <stdio.h>
#include <string.h>

int main(){
    char array[200];
    printf("Escribe cualquier cosa\n");
    fflush(stdin);
    scanf("%s", array);
    printf("\n La longitud de la cadena digitada es: %lu\n", strlen(array));

    return 0;
}