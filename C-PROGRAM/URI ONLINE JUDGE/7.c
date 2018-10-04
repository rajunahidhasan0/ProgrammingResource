#include<stdio.h>
int main()
{
    int a,b,sum,min,mul,div;
    scanf("%d",&a);
    scanf("%d",&b);
    sum=a+b;
    printf("a+b=%d\n",sum);
    min=a-b;
    printf("a-b=%d\n",min);
    mul=a*b;
    printf("a*b=%d\n",mul);
    div=a/b;
    printf("a/b=%d\n",div);
    return 0;
}
