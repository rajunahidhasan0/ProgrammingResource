#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
ll powl(ll x){
    ll r=1,i;
    for(i=1;i<=x;i++)r*=2;
    return r;
}
int main()
{
    int i,j,a,b,ts,cn=0,n;
    ll x,r,p;
    //freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%lld",&x);
        r=powl(x);
        while(r){
            p=r;
            r/=10;
        }
        if(x%2)printf("-%lld\n",p);
        else printf("+%lld\n",p);
        //printf("Case %d: \n",++cn,);
    }
    return 0;
}
