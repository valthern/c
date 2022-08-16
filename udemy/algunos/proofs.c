#include <stdio.h>
#include <string.h>

void punterosYCadenas();
void arreglosDeCaracteres();
void usoStrtok();

int main(){
    punterosYCadenas();
    arreglosDeCaracteres();
    usoStrtok();

    return 0;
}

// Para ver si devuelve el tamaño completo del arreglo a lo que
// apunta el puntero
void punterosYCadenas(){
    char texto[] = "Esto es una pinche mamada bien chueca";
    char *puntero = (char *)texto;
    printf("tamaño desde el puntero: %lu\n", strlen(puntero));
    printf("tamaño desde el arreglo: %lu\n", strlen(texto));
}
// CONCLUSIÓN: Sí lo devuelve bien

// Para saber cómo se imprime un arreglo de caracteres
void arreglosDeCaracteres(){
    char arr[3] = {'0', 64, '@'};

    printf("Imprimo el arreglo de Caracteres:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}
// CONCLUSIÓN: Se imprime la arroba dos veces por su código ASCII

// Uso de strtok()
void usoStrtok(){
    char s1[49] = "Esto es un ejemplo para usar la funcion strtok()";
    char s2[4] = " \n\t";
    char *ptr;

    printf( "s1=%s\n", s1 );

    ptr = strtok( s1, s2 );    // Primera llamada => Primer token
    printf( "%s\n", ptr );
    while( (ptr = strtok( NULL, s2 )) != NULL )    // Posteriores llamadas
        printf( "%s\n", ptr );
}
// CONCLUSION: Prueba exitosa