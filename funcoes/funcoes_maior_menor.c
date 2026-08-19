#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maiorMenor (int num1, int num2, int num3)
{
    int maior, menor;
    maior=num1;

    if (num2>maior)
    {
        maior=num2;
    }
    if (num3>maior)
    {
        maior=num3;
    }
    menor=num1;
    if (num2<menor);
    {
        menor=num2;
    }
    if (num3<menor)
    {
        menor=num3;
    }
    printf("Maior:%d\n",maior);
    printf("Menor:%d\n",menor);
}

int main()
{
    int num1,num2,num3;
    setlocale(LC_ALL,"Portuguese");

    printf("Informe o número 1:\n");
    scanf("%d",&num1);
    printf("Informe o número 2:\n");
    scanf("%d",&num2);
    printf("Informe o número 3:\n");
    scanf("%d",&num3);

    maiorMenor(num1,num2,num3);
    return 0;
}
