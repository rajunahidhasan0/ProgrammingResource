#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    ll i,j,a,b,ts,cn=0,n,f=1,v;
    ll x=0;
    //freopen("test.in","r",stdin);
    cin>>a>>b>>n;
    for(i=1;;){
        if(i>b)break;
        if(i>=a){
            if(!f)printf(" ");
            f=0;
            cout<<i;
        }
        x++;
        v=i*n;
        if(v/i==n)i=v;
        else break;
       // P(n)
    }

    if(f)printf("-1");
    printf("\n");
    return 0;
}
