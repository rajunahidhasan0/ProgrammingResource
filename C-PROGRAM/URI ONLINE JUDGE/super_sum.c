#include<stdio.h>
int main()
{
    int a,b,c,d,e,n;

    scanf("%d",&a);

    b=a%10;

    c=a/10;

    d=c%10;

    e=c/10;

    n=b+d+e;

    printf("%d",n);

    return 0;
}
