#include <stdio.h>
int main(void)
{
    unsigned int a=0x556677aa;
    unsigned int mask = 0xf;
    char str[17]={"0123456789abcdef"};
    unsigned int i=0;
    unsigned int move =28;
    printf("0x");
    for(i=0;i<8;i++)
    {
     printf("%c",str[((a>>move)&mask)]);
     move-=4;

    }
     printf("\n");
     return 0;
                                                                                    }
