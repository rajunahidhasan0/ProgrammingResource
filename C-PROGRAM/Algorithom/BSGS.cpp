#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
///#define mod 100000007
ll mod;
map<int, int>mp;
ll st[20010];

pii extnuc(ll a,ll b)
{
    if(b==0)return pii(1,0);
    pii d=extnuc(b,a%b);
    return pii(d.second,d.first-d.second*(a/b));
}

ll modi(ll n)
{
    pii d=extnuc(n,mod);
    return ((d.first%mod)+mod)%mod;
}

int main()
{
    ///a^x = k % m         ...find x.
    ll a, x, k, m, n, inverse;
    cin>> a >> k >> mod;

    m = ceil(sqrt(mod));

    mp.clear();
    st[0]=1;
    mp[1]=-1;
    for(ll i=1 ; i<m ; i++)
    {
        st[i]=st[i-1] * a;
        st[i]%=mod;
        if( mp[st[i]]>i || !mp[st[i]] )  mp[st[i]]=i;
    }

    ll u=1;
    for(ll i=0 ; i<m ; i++){
        u *= a;
        u %= mod;
    }
    inverse = modi(u);
    n=k;
    ll i, r;
    for(i=0 ; i<m ; i++){
        if(mp[n]){
            r = mp[n];
            break;
        }
        n *= inverse;
        n %= mod;
    }
    ///P2(i,r)
    if(r==-1)r=0;
    x=m*i+r;
    printf("x = %lld\n", x);
    return 0;
}
