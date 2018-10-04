#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    ll i,j,c,a,b,ts,f=1,cn=0,n,x,p,rm;
    //freopen("test.in","r",stdin);
    scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
    if(a<(b-c)){
        printf("%lld\n",n/a);
    }
    else if(b>n){
        printf("%lld\n",n/a);
    }
    else {
        x=n-b;
        p=x/(b-c);
        rm=n-p*(b-c);
        while(rm>=b){
        rm-=(b-c);
        p++;
        }
        if(a<b){
            p+=rm/a;
        }
        printf("%lld\n",p);
    }
    return 0;
}
