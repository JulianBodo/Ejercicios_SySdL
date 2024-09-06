// Integrantes: Bodo, Julián; Coronel, Martín.
#include <stdio.h>

int main()
{
    int numeros[5];
    int menor, mayor;
    for (int i = 0; i < 5; i++)
    {
        printf("\nIngrese un numero entero: ");
        scanf("%d", &numeros[i]);
    }
        if (numeros[0] < numeros[1])
        {
            menor = numeros[0];
            mayor = numeros[1];
        }
        else
        {
            mayor = numeros[0];
            menor = numeros[1];
        }
        for (int n = 2; n <= 4; n++)
        {
            if (numeros[n] < menor)
            {
                menor = numeros[n];
            }
            
            if (numeros[n] > mayor)
            {
                mayor = numeros[n];
            }
        
    }
    printf("El numero %d es mayor y el %d es menor\n", mayor, menor);
return 0;
}