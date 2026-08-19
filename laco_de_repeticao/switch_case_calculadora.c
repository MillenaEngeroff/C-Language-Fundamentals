#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int op1,op2,resultado;
    char operador;
    setlocale(LC_ALL,"Portuguese");

    printf("\nInforme o operando 1:\n");
    scanf("%d", &op1);

    printf("\nInforme o operador (+,-,*,/):\n");
    scanf(" %c",&operador);
    getchar();
    printf("\nInforme o operando 2:\n");
    scanf("%d", &op2);


    switch (operador)

    {
    case '+':
        resultado = op1+op2;
        printf("O resultado da sua adição é: %d", resultado);
        break;

    case '-':
        resultado = op1-op2;
        printf("O resultado da sua subtração é: %d", resultado);
        break;

    case 'x':
        resultado=op1*op2;
        printf("O resultado da sua multiplicação é: %d", resultado);
        break;

    case '/':
        resultado=op1/op2;
        printf("O resultado da sua divisão é: %d", resultado);
        break;

    default:
        printf("Operador inválido!");
        break;

    }


    return 0;
}
