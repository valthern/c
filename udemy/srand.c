#include <stdio.h>
// para que reconozca la fonción srand()
#include <stdlib.h>
#include <time.h>

void funcionAleatoria();

int main (){
    funcionAleatoria();
    return 0;
}

void funcionAleatoria(){
    int num;
    time_t t;

    srand(time(NULL));

    num = 1 + rand() % ((10 - 1) - 1);
    printf("%d\n", num);
}