/**
 * @file fibonacci.c        
 * @author your name (omar_238@hotmail.com)
 * @brief Serie de Fibonacci
 * 1,1,2,3,5,8...
 * fibonacci(1) = 1
 * fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2);
 * @version 0.1
 * @date 2022-01-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int fibonacci(int n);

int main() {
    int numero;

    printf("Escribe el numero de elementos\n");
    scanf("%i", &numero);

    for (int i = 0; i < numero; i++)
    {
        printf("%i, ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}