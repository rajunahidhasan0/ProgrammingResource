#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,p1,pn,ar[1000],mx,m2;
    //freopen("test.in","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        ar[i]=a;
        if(a==1)p1=i;
        if(a==n)pn=i;
    }
    mx=1;
    if(n==3){
        if(ar[2]==2)mx=1;
        else mx=2;
    }
    if(n>3){
        mx=max(p1-1,abs(n-p1));
        m2=max(pn-1,abs(n-pn));
        mx=max(mx,m2);
    }

    printf("%d\n",mx);
    return 0;
}
