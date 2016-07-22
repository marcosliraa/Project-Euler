/* Primeiro Exercício do Project Euler*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int soma,i;
    soma=0;
    for(i=1;i<11;i++)
    {
        if((i%3==0) ||(i%5==0))
            soma= soma + i;
        i++;
    }
    
    printf("%d\n",soma);
    return 0;
}
