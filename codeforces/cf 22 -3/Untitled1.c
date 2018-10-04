#include <stdio.h>
int main()
{
    int b,a[11],t,i,j;
    long double d;
    d=2.44E37;
    printf("%Lf\n",d);

    for(i=1;i<=11;i++){
        scanf("%d",&a[i]);
    }
    for(i=1,j=11;i<=6 && j>=6;i++,j--){
    t=a[j];
    a[j]=a[i];
    a[i]=t;
    }
    for(i=1;i<=11;i++){
        printf("%d\n",a[i]);
    }
    return 0;
    }
