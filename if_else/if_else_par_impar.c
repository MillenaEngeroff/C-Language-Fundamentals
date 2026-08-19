#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int num;
    setlocale (LC_ALL, "Portuguese");
    printf("Insira um número inteiro maior que 0: \n");
    scanf("%d", &num);
    if (num % 2 == 0 ) {
    printf("Número par %d", num);
    } else {
    printf ("Número impar %d", num);
    }
    return 0;
}
