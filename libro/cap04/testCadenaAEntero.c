#include <stdio.h>
#include "cadenas.h"

int main(){
    char s[]="12345";

    int n=cadenaAEntero(s);

    printf("Cadena = [%s]\n",s);
    printf("Numero = [%d]\n",n);

    return 0;
}
