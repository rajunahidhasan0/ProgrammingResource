#include<stdio.h>
int main()
{
    int n,n100,n50,n20,n10,n5,n2,n1,p,q,r,a,o,b;
    scanf("%d",&n);
    printf("%d\n",n);
    n100=n/100;
    printf("%d nota(s) de R$ 100,00\n",n100);
    r=n%100;
    n50=r/50;
    printf("%d nota(s) de R$ 50,00\n",n50);
    q=r%50;
    n20=q/20;
    printf("%d nota(s) de R$ 20,00\n",n20);
    p=q%20;
    n10=p/10;
    printf("%d nota(s) de R$ 10,00\n",n10);
    o=p%10;
    n5=o/5;
    printf("%d nota(s) de R$ 5,00\n",n5);
    a=o%5;
    n2=a/2;
    printf("%d nota(s) de R$ 2,00\n",n2);
    b=a%2;
    n1=b/1;
    printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}
