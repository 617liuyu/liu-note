#include <stdio.h>
#define N 30
char *my_copy(char *d,char *s)
{
    char *m=d;                       
     while(((*d++)=(*s++))!='\0');
  /*  while((*d=*s)!='\0')
          { d++;
            s++;}*/
 /*     while(*s!='\0')    
      {                   

         *d=*s;
         d++;
         s++;
      }
      *d='\0';*/
    return m;
}
int main(void)
{
    char str[N]="hello world!";
    char c_str[N];
    my_copy(c_str,str);
    printf("%s\n",c_str);
    return 0;
}
