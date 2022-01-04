// Sumar, restar, multiplicar, dividir

#include <stdio.h>

// Declaración de funciones
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main(){
    menu();
    return 0;
}

void menu(){
    int opcion;
    do
    {
        printf("1.- Sumar\n2.- Restar\n3.- Multiplicar\n4.- Dividir\n5.- Salir.\n");
        printf("Opcion: ");
        fflush(stdin);
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            sumar();
            break;
        case 2:
            restar();
            break;
        case 3:
            multiplicar();
            break;
        case 4:
            dividir();
            break;
        default:
            printf("Opcion no valida\nQué quieres hacer?\n");
            break;
        }
    } while (opcion != 5);
    
}

// Definición de funciones
void sumar(){
    int n1,n2,suma=0;
    printf("Escribe 2 numeros\n");
    scanf("%i %i", &n1, &n2);
    suma = n1 + n2;
    printf("La suma es %i\nQue mas quieres hacer?\n", suma);
}

void restar(){
    int n1, n2, resta = 0;
    printf("Escribe 2 numeros\n");
    scanf("%i %i", &n1, &n2);
    resta = n1 - n2;
    printf("La resta es %i\nQue mas quieres hacer?\n", resta);
}

void multiplicar(){
    int n1, n2, producto = 0;
    printf("Escribe 2 numeros\n");
    scanf("%i %i", &n1, &n2);
    producto = n1 * n2;
    printf("La resta es %i\nQue mas quieres hacer?\n", producto);
}

void dividir(){
    int n1, n2, division = 0;
    printf("Escribe 2 numeros\n");
    scanf("%i %i", &n1, &n2);
    division = n1 / n2;
    printf("La resta es %i\nQue mas quieres hacer?\n", division);
}