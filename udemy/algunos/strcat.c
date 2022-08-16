// strcat(destino, fuente);
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char cadena1[] = "Jorge", cadena2[] = "Ricardo";
    // Hay qué limpiar el arreglo de caracteres antes de usarlo
    // porque trae consigo basura en memoria, usando el caracter
    // nulo: "\0"
    char final[50] = "\0";
    
    strcat(final, cadena1);
    strcat(final, "-");
    strcat(final, cadena2);
    printf("%s\n", final);
    
    return 0;
}
