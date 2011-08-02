#include <stdio.h>
int f(int m)
{   int z;
    if (m==1)
    return 1;//f(1)不能做左值
    z=f(m-1)*m;
    return z;
}
int main(int argc, const char *argv[])
{
    int n;
    printf("please input an integer:\n");
    scanf("%d",&n);
    printf("n!=%d\n",f(n));
    return 0;
}


/*
int main(int argc, const char *argv[])
{
    int n,i,z;
       z=1;
       n=4;
    for(i=1;i<n+1;i++)
       z=z*i;
       printf("n!=%d\n",z);
    return 0;
}

*/
