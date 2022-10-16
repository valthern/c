#include <math.h>

void copiarCadena(char t[], char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        t[i] = s[i];
        i++;
    }
    t[i] = '\0';
}

int longitud(char t[])
{
    int i = 0;
    while (t[i] != '\0')
    {
        i++;
    }

    return i;
}

int esVacia(char s[])
{
    return s[0] == '\0';
}

void concatenarCadena(char t[], char s[])
{
    int i = 0;
    int j = longitud(t);

    while (s[i] != '\0')
    {
        t[j] = s[i];
        j++;
        i++;
    }

    t[j] = '\0';
}

int compararCadenas(char a[], char b[])
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
    {
        i++;
    }

    return a[i] - b[i];
}

long cadenaAEntero(char s[])
{
    int n = longitud(s);
    double ret = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        ret += pow(10, n - i - 1) * (s[i] - '0');
    }

    return ret;
}
