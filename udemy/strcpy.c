#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]){
    char origen = "Programacion";
    // Hay qué limpiar el arreglo de caaracteres antes de usarlo
    // porque trae consigo basura en memoria
    char destino[13] = "\0";

    strcpy(destino, origen);
    printf("%s\n", destino);

    return 0;
}