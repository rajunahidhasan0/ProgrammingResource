#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int cn1(ll n)
{
    int i,j,r;
    if(n<4)return n;
    if(n==2||n==3)return n;
    r=n%2;
    r+=2*cn1(n/2);
    return r;
}

ll cn2(ll n)
{
    ll r;
    if(n<2)return n;
    //P(n)
    if(n==2||n==3)return 3;
    r=1;
    r+=2*cn2(n/2);
    return r;
}

int cn3(ll n,int p)
{
    int i,j,r;
    if(n<4)return n;
    if(n==2||n==3)return n;
    r=n%2;
    r+=cn3(n/2, p/2)+cn3(n/2, p+p/2);
    return r;
}


int main()
{
    ll n;
    int i,j,a,b,ts,f=1,cn=0;
    //freopen("test.txt","r",stdin);
    //scanf("%lld",&n);
    n=pow(2,50);
    P(log(2,8))
    printf("%lld\n%lld\n",n,cn2(n));
    return 0;
}
