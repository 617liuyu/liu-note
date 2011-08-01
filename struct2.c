#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    struct student
    {
       int number;
       char name[20];
       struct  student *p;
    };

    struct student m;
    struct student *ptr=NULL;
    ptr = malloc(sizeof(struct student));//开辟空间
    if (ptr == NULL)//判断分配内存是否成功
    {
          perror("malloc");
          exit(0);//退出
    }
 
    ptr->number = 18;
    strcpy(ptr->name,"liuyu");
    printf("%-5d      %s\n",ptr->number,ptr->name);
    return 0;
}
