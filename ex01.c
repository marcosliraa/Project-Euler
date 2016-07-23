/* Primeiro Exercício do Project Euler
 * Autor: José Marcos de Lira Júnior
 *
 * Programa que deve calcular a soma dos numeros que sao multiplos de 3 e 5 abaixo de 1000*/

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
