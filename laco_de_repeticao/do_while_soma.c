#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num, soma=0;
    setlocale(LC_ALL,"Portuguese");

    printf("Informe um número (digite 0 para parar:)\n");

    do
    {
        scanf("%d",&num);
        soma +=num;

    }
    while (num != 0);
    printf("A soma dos números é: %d\n", soma);

    return 0;
}
