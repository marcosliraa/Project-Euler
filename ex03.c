/* Programa 3 do Project Euler
 * Autor: José Marcos de Lira Júnior
   Alterando besteiras
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long largestprime=0, i=2,div,j;
    const long max = 600851475143;
    
   div = max;
   while(div!=1)
    {
        if(div%i==0)
        {
            bool istrue=true;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    istrue=false;
                    break;
                }
            }
            if(istrue)
            {
                largestprime=i;
            }
        }
        while(div%i==0)
        {
            div= div/i;
        }
        if(div%i!=0)
            i=i+1;
    }
   printf("%ld\n",largestprime);
   return 0;
}
