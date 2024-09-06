// Integrantes: Bodo, Julián; Coronel, Martín.
#include <stdio.h>

int main()
{
    char caracteres[20];
    char vocales[5] = "aeiou";
    int contador[5] = {0, 0, 0, 0, 0};

    printf("Ingrese 20 caracteres: ");
    scanf("%s", caracteres);

    printf("%s\n", caracteres);

    for (int i = 0; i < 20; i++)
    {
        if (caracteres[i] == vocales[0])
        {
            contador[0]++;
        }
        else if (caracteres[i] == vocales[1])
        {
            contador[1]++;
        }
        else if (caracteres[i] == vocales[2])
        {
            contador[2]++;
        }
        else if (caracteres[i] == vocales[3])
        {
            contador[3]++;
        }
        else if (caracteres[i] == vocales[4])
        {
            contador[4]++;
        }
    }
    printf("Hay %d caracteres 'a'\nHay %d caracteres 'e'\nHay %d caracteres 'i'\nHay %d caracteres 'o'\nHay %d caracteres 'u'\n ", contador[0], contador[1], contador[2], contador[3], contador[4]);

    return 0;
}
