// strrchr(cadena, caracter);
// Regrsa el restante de la cadena a partir de la primera aparición
// del caracter indicado.
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char abecedario[] = "abcdefghijklmnñopqrstuvwxyz";
    char corte;

    printf("\nLetra donde se cortará el abeecdario: ");
    fflush(stdin);
    scanf("%c", &corte);
    printf("\n%s\n", strrchr(abecedario, corte));

    return 0;
}
