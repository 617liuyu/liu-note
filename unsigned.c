#include <stdio.h>
int main(int argc, const char *argv[])
{
    int a =-10;
    unsigned int b=6;
    if ((a=b)<b)/*int转换成unsigned int 在计算*/
   {
           printf ("hello\n");

   }
   else
   {
                                      
          printf ("world\n");
   }
       return 0;
}
