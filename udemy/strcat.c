#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char cadena1[] = "Jorge", cadena2[] = "Ricardo";
    // Hay qué limpiar el arreglo de caaracteres antes de usarlo
    // porque trae consigo basura en memoria
    char final[50] = "\0";
    
    strcat(final, cadena1);
    strcat(final, "-");
    strcat(final, cadena2);
    printf("%s\n", final);
    
    return 0;
}
