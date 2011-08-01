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

void quick_sort(int *p,int x,int y)
{
    int i = x;
    int j = y;
    int mid = p[(i+j)/2];
    int temp=0;
do{
   while((p[i]<mid)&&(i<y))i++;

   while((p[j]>mid)&&(j>x))j--;
            if(i<=j)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                i++;
                j--;

            }
  } while(i<=j);
  if (x<j)
  {
     quick_sort(p,x,j);
  
  }
        
    if (i<y)

  {
      quick_sort(p,i,y);
  }

}
int main(int argc,  char *argv[])
{
    int array[M];

    init_array(array, M);
    print_array(array, M);
    quick_sort(array,0, M-1);
    print_array(array, M);
    
    return 0;
} 
        

