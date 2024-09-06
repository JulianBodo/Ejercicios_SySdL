//Integrantes: Bodo, Julián; Coronel, Martín.
#include<stdio.h>

int main()
{
    int n;
    int i = 0;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}