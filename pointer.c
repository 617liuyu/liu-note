#include <stdio.h>
#define N 10
int main(void)
{
    char str[N];
    char *ptr;
    int i=0;
    ptr=str;
    for (i=0;i<N;i++,ptr++)
    {
       *ptr = 'a'+i;
    }
    for (i=0;i<N;i++)
    {
    printf("%c",str[i]);

    }
    printf ("\n");
    return 0;
}
