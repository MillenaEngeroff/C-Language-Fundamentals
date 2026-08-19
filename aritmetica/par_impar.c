#include <stdio.h>
#include <stdlib.h>
#include <locale.h>// Imformar se é par ou impar

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe um valor: ");
    scanf ("%d", &num);
    if (num%2==0)
    {
        printf("O número é par");
    }
   else
    {
       printf("O número é impar");
    }
    return 0;
}
