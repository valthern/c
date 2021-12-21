// Sumar, restar, multiplicar, dividir

#include <stdio.h>

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
        printf("1.- Sumar\n2.- Restar\n3.- Multiplicar\n4.- Dividir\n5.- Salir.");
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
            printf("Opcion no valida\nQué quieres hacer?\n")
            break;
        }
    } while (opcion != 5);
    
}

void sumar(){
    //
}

void restar(){
    //
}

void multiplicar(){
    //
}

void dividir(){
    //
}