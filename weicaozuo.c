#include <stdio.h>
int main(void)

{
    unsigned int a= 0x556677aa;
    unsigned int mask = (1<<31);
    for(;mask>0; mask >>= 1 )
   {

        printf("%d",((a & mask)>0)?1:0);
   }

        printf("\n");

        return 0;
   }

