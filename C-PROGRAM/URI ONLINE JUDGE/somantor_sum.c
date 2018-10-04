#include<stdio.h>
int main()
//1+2+4+7+11+16+.....+n=?
{
    int a=1,b=1,z=0,n;

    scanf("%d",&n);

L:  z=z+1;
    a=a+z;
    b=a+b;

    if(a<n) goto L;

    printf("The sum is:%d",b);

    return 0;
}
