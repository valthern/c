/**
 * @file myString.h
 * @author Omar I. Martínez Gómez (omar_238@hotmail.com)
 * @brief Creación de funciones que no se encuentran en la
 * librería "string.h" en los sistemas unix 
 * @version 0.1
 * @date 2021-12-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <string.h>
#include <ctype.h>

char *strlwr(char *str)
{
    unsigned char *pointer = (unsigned char *)str;

    while (*pointer)
    {
        *pointer = tolower((unsigned char)*pointer);
        pointer++;
    }

    return str;
}

char *strupr(char *str){
    unsigned char *pointer = (unsigned char *)str;

    while (*pointer)
    {
        *pointer = toupper((unsigned char)*pointer);
        pointer++;
    }
    
    return str;
}

char *strrev(char *str){
    int longitud = strlen(str);
    unsigned char *pointer = (unsigned char *)str;
    char invertida[longitud]; //consideré sumarle uno

    for (int i = 0; i < longitud; i++)
    {
        /* code */
    }
    
}