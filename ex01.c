/* Primeiro Exercício do Project Euler*/

#include <stdlib.h>
#include <stdio.h>

int processo();

int main(void)
{
    int resultado;

    resultado = processo();
    printf("%d\n",resultado);

    return 0;
}

int processo()
{
    int soma, i;
    soma = 0;
    for(i=1;i<1000;i++)
    {
        if((i%3==0) || (i%5==0))
            soma = soma + i;
    }

    return soma;
}
