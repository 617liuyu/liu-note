#include <stdio.h>
#define N 10
int main(void)
{
    char  array[N]={0};
    int i;
    int interval=4;
    int m=0;
    int out_counter = 0;
    for (i=0;m<N;i++)
    {
                    
       if(i==N)
       {
          i=0;
       }
    if(array[i]==0)
      {
       out_counter++;
       if(out_counter == interval)
         { 
          m++;
          array[i]=1;
          out_counter = 0;
       
          printf("%5d(out)\n",i+1);
         }
       else
         {
           printf("%5d",i+1);
         
         }
      }

    }
    
      return 0;
}
