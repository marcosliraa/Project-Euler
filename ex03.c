/* Programa 3 do Project Euler
 * Autor: José Marcos de Lira Júnior
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 600851475143

int main()
{
    int primo, i;

    for(i=3;i<MAX;i=i+2)
    {
        if(MAX % i ==0)
            primo = i;
    }
    printf("%d",primo);
    return 0;
}
