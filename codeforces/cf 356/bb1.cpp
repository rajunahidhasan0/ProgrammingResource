#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,s,x,ar[1111];
    //freopen("test.in","r",stdin);
    scanf("%d%d",&n,&a);
    for(i=1;i<=n;i++){
        scanf("%d",&ar[i]);

    }
    s=0;
    for(i=a,j=a;i<=n&&j;i++,j--){
        x=ar[i]+ar[j];
        if(x==2){
            if(i==j)s++;
            else s+=2;
        }

    }
    for(;i<=n;i++){
        s+=ar[i];
    }
    for(;j;j--){
        s+=ar[j];
    }

    printf("%d\n",s);
    return 0;
}
