#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    ll i,j,a,b,ts,f=1,cn=0,n,k,w,s;
    //freopen("test.txt","r",stdin);
    scanf("%lld%lld%lld",&k,&w,&n);
    s=(2*k)+(n-1)*k;
    s=(n*s)/2;
    b=max(0LL,s-w);
    printf("%lld\n",b);
    return 0;
}
