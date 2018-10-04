#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int j,a,b,ts,f=1,cn=0,n=200;
    freopen("test.txt","r",stdin);
    ll ft=1,i,x,ld=1;
    for(i=1;i<n;i++){
        ft*=i;
        x=ft;
        ld*=i;
        while(ld%10==0)ld/=10;
        ld%=10;
        while(x%10==0)x/=10;
        x%=10;
        printf("%lld\t%lld\n",i,ld);
    }

    printf("%d\n");
    return 0;
}
