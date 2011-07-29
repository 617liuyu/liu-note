#include <stdio.h>

int main(void)
{
    char a[30]="hello world!";
    char b[30];
    char *p;
    int i=0;

    p=a;
 
   while (*p!='\0')
   {
     b[i]=*p++;
     i++;
   }

     b[i]='\0';
     printf("%s",b);
     printf("\n");
     return 0;
}
