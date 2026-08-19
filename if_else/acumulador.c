#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /// Informar 5 números e dizer a quantidade de posi e neg.
int main()
{
    int num, pos=0,neg=0;
    setlocale (LC_ALL,"Portuguese");
    printf("Informe 5 números:\n");
    for (int i=0; i<5; i++)
    {
        scanf("%d", &num);
        if (num>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    printf("Quantidade de positivo: %d\n", pos);
    printf("Quantidade de negativo: %d\n", neg);
    return 0;
}
