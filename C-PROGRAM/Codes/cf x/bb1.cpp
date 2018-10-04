#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
ll fn(ll n){
if(n<0)return 0;
    return (n*(n+1))/2;
}
int main()
{
    ll i,j,a,b,ts,f=1,cn=0,n,m,k,s,l,h;
    //freopen("test.txt","r",stdin);
    scanf("%lld %lld %lld",&n,&m,&k);
    m-=n;
    a=1;
    for(l=1,h=m;l<=h;){
        i=(l+h)/2;
        s=2*fn(i)-i;
        s-=fn(i-k);
        s-=fn(i-n+k-1);
        //P(s)
        if(s<=m){
        //P(i)
            a=i+1;
            l=i+1;
        }
        else{
            h=i-1;
        }
    }

    printf("%lld\n",a);
    return 0;
}
