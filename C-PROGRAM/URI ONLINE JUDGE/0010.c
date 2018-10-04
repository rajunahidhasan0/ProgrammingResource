#include<stdio.h>
int main()
{
    int n=6,m=0,i;

    for(i=1;i<=10;i=i+1)
    {
        m=m+n;

        printf("%d*%d=%d\n",n,i,m);
    }
    return 0;
}
