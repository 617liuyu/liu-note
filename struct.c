#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    struct student
    {
       int number;
       char name[20];
       struct  student *p;
    };

    struct student m;
    struct student n;
    struct student *ptr;
    ptr=&m;
    ptr->p=&n;
   
    ptr->p->number=120;
    strcpy(ptr->p->name,"liuyu");
    printf("number     name\n");
    printf("%-5d      %s\n",ptr->p->number,ptr->p->name);
    
    return 0;
}
