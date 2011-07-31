#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define	M 20
void init_array(int *p, int n)
{
	int i= 0;
	
	srand(time(NULL));
	for(i=0; i<n; i++)
	{
		p[i] = rand()%(n/2);
	}
}

void print_array(int *p, int n)
{
	int i= 0;

	for(i=0; i<n; i++)
	{
		if((i%10) == 0)
		{
			printf("\n");
			}
		printf("%5d", p[i]);
	}
	printf("\n");
}
void print_result(int *p, int n)
{
	int i= 0;

	for(i=0; i<n; i++)
	{
		if(p[i] != -1)
		{
			if((i%10) == 0)
			{
				printf("\n");
			}
			printf("%5d", p[i]);
		}			
	}
	printf("\n");
}
void delete_same(int *p, int n)
{
	int i = 0;
	int j = 0;

	for(i=0; i<n-1; i++)
	{
		if(p[i] != -1)
		{
			for(j=i+1;j<n;j++)
			{
				if(p[i] == p[j])
				{
					p[j]=-1;
				}
			}
		}
	}
}
int main(void)
{
	int array[M];

	init_array(array, M);
	print_array(array, M);
	delete_same(array, M);
	print_result(array, M);
	return 0;
}
