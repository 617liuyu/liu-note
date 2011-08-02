#include <stdio.h>
#include <string.h>//strcpy的头文件
#include <stdlib.h>//malloc的头文件
struct student
{
	int number;
	char name[20];
	struct student *next;
};

typedef	struct student STU;//把 struct student 用STU代替

STU *create_link(int n)//创建链表
{
	int i = 0;
	STU *head = NULL;
	STU *p = NULL;

	head = p = malloc(sizeof(STU));
	if(p == NULL)
	{
		perror("create");
		exit(0);
	}
	p->number = 1;
	strcpy(p->name, "student");
	p->next = NULL;
	
	for(i=1; i<n; i++)
	{
		p->next = malloc(sizeof(STU));
		if(p->next == NULL)
		{
			perror("create");
			exit(0);
        }
		p->next->number = i+1;
		strcpy(p->next->name, "student");
		p->next->next = NULL;
		p = p->next;//指针的移动

	}

	return head;
}

void print_link(STU *p)
{
	while(p != NULL)
	{
		printf("%-5d  %s\n", p->number,p->name);
		p = p->next;//指针的移动
	}
}
int counter_link(STU *p)//链表的成员的个数
{
    int counter=0;
    while(p!=NULL)
    {
      counter++;
      p=p->next;
    }
   return counter;
}
int main(void)
{


	STU *head = NULL;
    int shu;
	head = create_link(10);
	print_link(head);
    shu=counter_link(head);
    printf("counter=%d\n",shu);
	return 0;
}
