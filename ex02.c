/* Exercício 2- Project Euler
 * Autor: José Marcos de Lira Júnior
 */


#include <stdio.h>
#include <stdlib.h>
#define MAX 4000000

int main()
{
    int fib=1, i=1, j=1,soma=0;
    
    while(fib <= MAX)
    {
        if(fib % 2 ==0)
            soma = soma + fib;
        fib = i + j;
        i=j;
        j=fib;
    }

    printf("%d\n",soma);

    return 0;
}
