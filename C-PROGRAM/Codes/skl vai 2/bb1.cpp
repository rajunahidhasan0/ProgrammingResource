#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int pd(ll n)
{
    char s[1000],s2[1000];
    sprintf(s,"%lld",n);
    sprintf(s2,"%lld",n);
    int ln;
    ln =strlen(s);
    reverse(s,s+ln);
    if(strcmp(s,s2)) return 0;
    return 1;

}
ll rev(ll n)
{
    char s[1000];
    ll x;
    int ln;
    sprintf(s,"%lld",n);
    ln =strlen(s);
    reverse(s,s+ln);

    sscanf(s,"%lld",&x);
    //P(s)
    return x;

}

int main()
{
    ll i,j,a,b,ts,cn=0,n,st;
    //freopen("test.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld",&n);
        st=0;
        while(!pd(n)){
            n=n+rev(n);
            st++;
        }
        printf("%lld %lld\n",st,n);
    }
    return 0;
}
