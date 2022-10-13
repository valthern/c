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