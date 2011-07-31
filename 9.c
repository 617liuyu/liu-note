#include <stdio.h>
int j=0;
int f(int n)
{
   if((n%10)==9)j++;
   n=n/10;
   if(n>10)
   f(n);
   if(n==9)j++;
   return j;
}
int main(void)
{ 
    int i;
    for(i=0;i<10000;i++)
    {
        f(i);
    }

    printf("%d\n",j);
    return 0;
}
