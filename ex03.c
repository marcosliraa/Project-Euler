/* Programa 3 do Project Euler
 * Autor: José Marcos de Lira Júnior
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void)
{
    long largestprime=0, i,j;
    const long max = 600851475143;
    for(i=3;i<max;i=i++)
    {
        if(max % i ==0)
        {
            bool prime=true;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    prime=false;
                    break;
                }
            }
            if(prime)
                largestprime=i;
        }
    }
    printf("%ld\n",largestprime);
    
    return 0;
}
