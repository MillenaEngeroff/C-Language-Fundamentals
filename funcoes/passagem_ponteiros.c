#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a=5, b=10,c=15;
    int *p1=&a;
    int *p2=&b;

    setlocale(LC_ALL,"Portuguese");

    printf("Soma:%d\n",*p1+*p2);

    *p2=*p1;
    *p2=*p2*2;

    printf("Valor de P2:%d\n",*p2);

    return 0;
}
