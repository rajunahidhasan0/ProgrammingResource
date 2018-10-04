#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t2.txt","w",stdout);
using namespace std;
ll dp[10000];
double ar[250];
ll d(ll n)
{
    if(n==1)return 0;
    if(n==2)return 1;
    if(dp[n]) return dp[n];
    dp[n]=(n-1)*(d(n-1)+d(n-2));
    return dp[n];
}
ll ft[33];
void fact()
{
    int i=1;
    ft[0]=1;
    for(;i<25;i++)ft[i]=ft[i-1]*i;
}

int main()
{
    ll i,j,a,b,ts,cn=0,n;

    double r;
    //freopen("test.txt","r",stdin);
    scanf("%lld",&ts);
    fact();
    for(i=1;i<21;i++){
        n=i;
        r=(ft[n]-d(n))/(double)ft[n];
        ar[i]=r;
    }
    while(ts--){
        scanf("%lld",&n);
        //P(n)
        //P(d(n))
        //r=(ft[n]-d(n))/(double)ft[n];
        if(n<=20)r=ar[n];
        else r=ar[20];
        printf("%.10lf\n",r);
    }
    return 0;
}
