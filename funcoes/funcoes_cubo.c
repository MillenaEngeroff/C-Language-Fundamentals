#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int cubo (int n)
{
    int resultado;
    resultado=n*n*n;
    return resultado;
}
int main()
{
    int n,resultado;
    setlocale(LC_ALL,"Portuguese");
    printf("Informe um valor positivo:\n");
    scanf("%d",&n);
    resultado=cubo(n);
    printf("Resultado:%d  %d\n",n,resultado);
    return 0;
}
