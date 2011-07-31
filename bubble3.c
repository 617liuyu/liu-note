#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M   20

void print_array(int *p, int n)
{
    int i = 0;

    for(i=0; i<n; i++)
    {
        if((i%8) == 0)
        {
            printf("\n");
        }
        printf("%6d", p[i]);
    }
    printf("\n");
}

void init_array(int *p, int n)
{
    srand(time(NULL));

    int i = 0;

    for(i=0; i<n; i++)
    {
        p[i] = rand()%(n*2);
    }
}

void sort_array(int *p, int n)
{
    int i = 0;
    int j = 0;
    int temp;
    int k =0;
    for(i=0; i<(n-1); i++)
    {
         k=i; 
        for(j=i+1; j<n; j++)
         {
            if(p[k] > p[j])
             k=j;                     
         }
           if (i!=k)
            {   
                temp = p[k];
                p[k] = p[i];
                p[i] = temp;
            }
        
    }
}

int main(int argc,  char *argv[])
{
    int array[M];

    init_array(array, M);
    print_array(array, M);
    sort_array(array, M);
    print_array(array, M);
    
    return 0;
} 
        


