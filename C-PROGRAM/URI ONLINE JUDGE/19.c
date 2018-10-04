#include<stdio.h>
int main()
{
    int a,b;

    a=5;
    b=6;
    printf("%d,%d\n",a,b);
    a+=5;
    a-=b;

    printf("%d,%d",a,b);

    return 0;
}
