#include<stdio.h>
int main()
{
    int a=0,b=1;

L:  a=a+1;

    b=a*b;

    if(a<8) goto L;

    printf("%d",b);

    return 0;
}
