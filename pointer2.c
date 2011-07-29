#include <stdio.h>
#define N 30
int main(void)
{
    char str[N]="hello world!";
    char *p;
    p=str;
    while (*p!='\0')//字符串以\0为结束标志//
    {
    printf("%c",*p++);
    }
    p--;
    while (p>=str)//当指针地址大于数组首地址时，//
    printf("%c",*p--);

    printf ("\n");
    return 0;


}
       
