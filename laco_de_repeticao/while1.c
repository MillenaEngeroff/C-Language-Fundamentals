#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num;
    setlocale (LC_ALL,"Portuguese");
    printf("Informe um número positivo: \n");
    scanf("%d", &num);

    while (num>=0)
    {
        printf("%d\n",num);
        num--;
    }
    return 0;
}
