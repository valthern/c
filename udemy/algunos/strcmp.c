// strcmp(cadena1, cadena2);
#include <stdio.h>
#include <string.h>

int main()
{
    char claveSecreta[] = "Contraseña";
    char usuarioDigito[128] = "\0";
    int intentosRestantes = 3;

    do
    {
        printf("\n\nEscribe la clave secreta: ");
        fflush(stdin);
        scanf("%s", &usuarioDigito);

        if (strcmp(claveSecreta, usuarioDigito) == 0)
        {
            printf("\nBienvenido al sistema\n");
            break;
        }
        else
        {
            intentosRestantes--;
            printf("Clave secreta incorrecta, le quedan %i intentos\n", intentosRestantes);
        }
    } while (intentosRestantes > 0);

    return 0;
}