#include <stdio.h>
#define TAMANO 10

int main(){
    int a[TAMANO] = {2,4,6,8,0,1,3,5,7,9};
    int i,dato;
    char band = 'F';

    printf("Escribe un numero para buscar\n");
    scanf("%i", &dato);

    i = 0;
    while((band == 'F') && (i < TAMANO)){
        if(a[i] == dato) band = 'V';
        i++;
    }

    if (band == 'F'){
        printf("El numero no existe en la lista\n");
    }else if(band == 'V'){
        printf("El número existe en la posición %i\n", i - 1);
    }

    return 0;
}