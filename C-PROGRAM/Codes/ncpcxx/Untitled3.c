#include <stdio.h>
int main()
{
    int a,b,n;
    scanf("%d", &n);
    for(a=1; a<=n;a=a+1){
        for(b=1;b<=(n-1);b=b*a){
            printf("%d\n", b);
    }
}
    return 0;
}
