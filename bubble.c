#include "stdio.h"
int main (void)
{  
  int b;
  int i,j;
  int a[10]={3,4,55,77,8,99,444,55,7,34};
   for (j=9;j>0;j--)
   {
     for (i=0;i<j;i++)
        if (a[i+1]>a[i])
           {
            b=a[i+1];
            a[i+1]=a[i];
            a[i]=b;     
           }
    }
  for (i=0;i<10;i++)
     printf ("%d ",a[i]);

     printf("\n");
        return 0;

}
