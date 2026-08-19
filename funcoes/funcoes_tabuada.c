#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuada (int n)
{
    for (int i=0; i<=10; i++)
    {
        printf("%d x %d = %d\n",i,n,n*i);
    }
}

int main()
{
    int n;
    setlocale(LC_ALL,"Portuguese");
    printf("Informe um valor positivo:\n");
    scanf("%d",&n);

    printf("TABUADA DO ",n);
    tabuada(n);
    return 0;
}
